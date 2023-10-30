// Menu.h
#ifndef MENU_H
#define MENU_H
#include <string>
#include <vector>
#include <iostream>

class Menu
{
public:
    Menu();
    virtual ~Menu();

    virtual void addMenu(Menu *menu) = 0;
    virtual void print() = 0;
};

#endif // Menu_H