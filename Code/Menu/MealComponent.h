#ifndef MEALCOMPONENT_H
#define MEALCOMPONENT_H

#include "Menu.h"

class MealComponent : public Menu
{
public:
    MealComponent(int prepTime, float cost, std::string name);

    float getCost();
    void setCost(float cost);

    std::string getName();
    void setName(std::string name);

    int getPrepTime();
    void setPrepTime(int prepTime);

    virtual ~MealComponent() {}

    std::string name;

private:
    float _cost;
    int _preptime;
};

#endif // MEALCOMPONENT_H
