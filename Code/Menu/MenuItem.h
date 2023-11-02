// MenuItem.h
#ifndef MENUITEM_H
#define MENUITEM_H
#include "Menu.h"
#include "MealComponent.h"
#include "Plating.h"

class MenuItem : public Menu
{
public:
    std::string name;
    MenuItem(std::string name, std::vector<MealComponent*> mealComponent, Plating *plating);
    ~MenuItem();

    void addMenu(Menu *menu) override;
    void print() override;

    float getCost();
    void setCost(float cost);

    std::string getName();
    void setName(std::string name);

    int getPrepTime();
    void setPrepTime(int prepTime);
    
    std::vector<MealComponent*> MenuItem::getComponents();

private:
    float _cost;
    int _prepTime;
    std::vector<Menu *> nextItem;
    std::vector<MealComponent *> components;
};

#endif // MENUITEM_H
