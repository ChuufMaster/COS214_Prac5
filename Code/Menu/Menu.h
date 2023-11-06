// Menu.h
#ifndef MENU_H
#define MENU_H
#include <iostream>
#include <string>
#include <vector>
class Menu {
public:
  Menu();
  virtual ~Menu();

  virtual void addMenu(Menu *menu) = 0;
  virtual std::string print() = 0;

private:
};

#endif // Menu_H