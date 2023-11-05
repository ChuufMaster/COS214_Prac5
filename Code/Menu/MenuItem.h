// MenuItem.h
#ifndef MENUITEM_H
#define MENUITEM_H
#include "MealComponent.h"
#include "Menu.h"
#include "Plating.h"

class MenuItem : public Menu {
public:
  std::string name;
  MenuItem(std::string name, std::vector<MealComponent *> mealComponent,
           Plating *plating);
  MenuItem();
  ~MenuItem();

  void addMenu(Menu *menu) override;
  void print() override;

  float getCost();
  void setCost(float cost);

  std::string getName();
  void setName(std::string name);

  int getPrepTime();
  void setPrepTime(int prepTime);

  std::vector<MealComponent *> getComponents();

private:
  float _cost;
  int _prepTime;
  std::vector<Menu *> nextItem;
  std::vector<MealComponent *> components;
};

#endif // MENUITEM_H
