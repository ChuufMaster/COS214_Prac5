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
    MenuItem(MealComponent *mealComponentArr, Plating *plating);
    ~MenuItem();

    void addMenu(Menu *menu);
    void print() override;

    float getCost();
    void setCost(float cost);

    std::string getName();
    void setName(std::string name);

    int getPrepTime();
    void setPrepTime(int prepTime);
    
    virtual void plating();

private:
    float _cost;
    int _prepTime;
    std::vector<Menu *> nextItem;
};

#endif // MENUITEM_H
