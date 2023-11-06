#include "CloseRestaurant.h"
#include "Command.h"
#include "MaitreD.h"
#include "OpenRestaurant.h"
#include "Restaurant.h"
#include <iostream>
#include <locale.h>
#include <ncurses/menu.h>
#include <ncurses/ncurses.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

WINDOW *create_newwin(int height, int width, int starty, int startx);
void destroy_win(WINDOW *local_win);

int main(int argc, const char **argv) {
  setlocale(LC_ALL, "");

  Restaurant &restaurant = Restaurant::_restaurant();
  MaitreD *maitreD = new MaitreD(new OpenRestaurant(), new CloseRestaurant());
  maitreD->openRestaurant();

  restaurant.setFloor(new Floor(maitreD));
  /*while (restaurant.isOpen) {

  }
*/
  Floor *test = new Floor(maitreD);
  std::string str = test->toString();
  std::cout << test->toString() << std::endl;

  initscr();
  cbreak();
  keypad(stdscr, TRUE);

  printw("Press F1 to exit ╬");
  refresh();

  WINDOW *floor = newwin(23, 37, 0, 0);
  wprintw(floor, "%s", str.c_str());
  box(floor, 0, 0);
  wrefresh(floor);

  getch();
  endwin();

  return 0;
}
