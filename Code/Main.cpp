#include "CloseRestaurant.h"
#include "Command.h"
#include "MaitreD.h"
#include "OpenRestaurant.h"
#include "Restaurant.h"
#include <iostream>
#include <locale.h>
#include <ncurses/curses.h>
#include <ncurses/menu.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARRAY_SIZE(a) (sizeof(a) / sizeof(a[0]))
#define CTRLD 4

void print_in_middle(WINDOW *win, int starty, int startx, int width,
                     const char *string, chtype color);

void func(char *name);

void destroy_win(WINDOW *local_win);

WINDOW *create_newwin(int height, int width, int starty, int startx,
                      std::string str);

int main() {
  const char *choices[] = {"Next Round", "Open Restaurant", "Close Restaurant",
                           "EXIT", (char *)NULL};
  setlocale(LC_ALL, "");

  Restaurant &restaurant = Restaurant::_restaurant();
  KitchenWindow *kitchen = new KitchenWindow();
  MaitreD *maitreD =
      new MaitreD(new OpenRestaurant(), new CloseRestaurant(), kitchen);
  maitreD->openRestaurant();

  restaurant.setFloor(new Floor(maitreD));

  std::string str = restaurant.getFloor();
  if (true) {
    maitreD->notify();
    maitreD->notify();
    maitreD->notify();
    maitreD->notify();
    str = restaurant.getFloor();
    // std::cout << str << std::endl;
    //  return 0;
  }
  //  std::cout << test->toString() << std::endl;
  ITEM **my_items;
  int c;
  MENU *my_menu_items;
  int n_choices, i;

  WINDOW *menuWindow;

  WINDOW *floor;

  initscr();
  noecho();
  cbreak();
  refresh();

  start_color();

  keypad(stdscr, TRUE);

  init_pair(1, COLOR_RED, COLOR_BLACK);

  floor = newwin(23, 37, 0, 4);

  wprintw(floor, "%s", str.c_str());
  box(floor, 0, 0);
  wrefresh(floor);

  n_choices = ARRAY_SIZE(choices);
  //  n_choices = 5;
  my_items = (ITEM **)calloc(n_choices + 1, sizeof(ITEM *));
  for (i = 0; i < n_choices; ++i) {
    my_items[i] = new_item(choices[i], choices[i]);
    // set_item_userptr(my_items[i], func);
  }
  my_items[n_choices] = (ITEM *)NULL;

  my_menu_items = new_menu((ITEM **)my_items);

  menuWindow = newwin(10, 40, 26, 4);

  keypad(menuWindow, TRUE);

  set_menu_win(my_menu_items, menuWindow);
  set_menu_sub(my_menu_items, derwin(menuWindow, 6, 38, 3, 1));

  set_menu_mark(my_menu_items, "*");

  box(menuWindow, 0, 0);

  print_in_middle(menuWindow, 1, 0, 40, "OPTIONS MENU", COLOR_PAIR(1));

  mvwaddch(menuWindow, 2, 0, ACS_LTEE);
  mvwhline(menuWindow, 2, 1, ACS_HLINE, 38);
  mvwaddch(menuWindow, 2, 39, ACS_RTEE);
  mvprintw(LINES - 2, 0, "F1 to Exit");

  refresh();

  post_menu(my_menu_items);
  wrefresh(menuWindow);

  while ((c = wgetch(menuWindow)) != KEY_F(1)) {
    switch (c) {
    case KEY_DOWN:
      menu_driver(my_menu_items, REQ_DOWN_ITEM);
      break;
    case KEY_UP:
      menu_driver(my_menu_items, REQ_UP_ITEM);
      break;

    case 10: {
      ITEM *cur;

      cur = current_item(my_menu_items);

      if (cur == my_items[0]) {
        maitreD->notify();
        str = restaurant.getFloor();

        destroy_win(floor);
        floor = create_newwin(23, 37, 0, 4, str);
      }
    }
    }

    // wprintw(floor, "%s", restaurant.getFloor().c_str());
    wrefresh(menuWindow);
    // wrefresh(floor);
  }

  unpost_menu(my_menu_items);
  free_menu(my_menu_items);
  for (i = 0; i < n_choices; ++i)
    free_item(my_items[i]);

  endwin();

  return 0;
}

void print_in_middle(WINDOW *win, int starty, int startx, int width,
                     const char *string, chtype color) {
  int length, x, y;
  float temp;
  if (win == NULL)
    win = stdscr;
  getyx(win, y, x);
  if (startx != 0)
    x = startx;
  if (starty != 0)
    y = starty;
  if (width == 0)
    width = 80;
  length = strlen(string);
  temp = (width - length) / 2;
  x = startx + (int)temp;
  wattron(win, color);
  mvwprintw(win, y, x, "%s", string);
  wattroff(win, color);
  refresh();
}

void func(char *name) {
  move(20, 0);
  clrtoeol();
  mvprintw(20, 0, "Item selected is : %s", name);
}

WINDOW *create_newwin(int height, int width, int starty, int startx,
                      std::string str) {
  WINDOW *local_win;
  local_win = newwin(height, width, starty, startx);
  wprintw(local_win, "%s", str.c_str());
  box(local_win, 0, 0);
  wrefresh(local_win);
  return local_win;
}
void destroy_win(WINDOW *local_win) {
  wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');

  wrefresh(local_win);
  delwin(local_win);
}