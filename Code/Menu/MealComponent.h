#ifndef MEALCOMPONENT_H
#define MEALCOMPONENT_H
#include "Menu.h"
#include <string>


class MealComponent {
public:
  MealComponent(int prepTime, float cost, std::string name, int type);

  float getCost();
  void setCost(float cost);

  std::string getName();
  void setName(std::string name);

  int getPrepTime();
  void setPrepTime(int prepTime);

  ~MealComponent() {}

  std::string name;
  int type;

private:
  float _cost;
  int _preptime;
};

#endif // MEALCOMPONENT_H
