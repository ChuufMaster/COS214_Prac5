// MenuItem.h
#ifndef MENUITEM_H
#define MENUITEM_H
#include "MealComponent.h"
#include "Menu.h"
#include "Plating.h"

class MenuItem : public Menu {
public:
  std::string name;
  MenuItem();
  ~MenuItem();

  void addMenu(Menu *menu) override;
  std::string print() override;

  float getCost();
  void setCost(float cost);

  std::string getName();
  void setName(std::string name);

  int getPrepTime();
  void setPrepTime(int prepTime);

  std::vector<MealComponent *> getComponents();

  float getAddedCost() const;
  const std::string &getName() const;
  void setAddedCost(float cost);

  Plating *getPlating();

private:
  float _cost = 10.0;
  int _prepTime;
  float _addedCost;
  std::vector<Menu *> nextItem;
  std::vector<MealComponent *> components;
  std::string _name;
};

#endif // MENUITEM_H
