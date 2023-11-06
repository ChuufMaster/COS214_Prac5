#include "MealComponent.h"
using namespace std;

// JUST CHECK, I GOT AN ERROR THAT THE RUN FAILED, BUT IM SURE THE ENUM'S ARE CORRECT
/*enum Meat {
    Chicken,
    Beef,
    Pork,
    Fish,
    Plantbased_Meat,
    MeatCount
};

enum Starch {
    Garlic_Butter_Quinoa,
    FrenchFries,
    Sweetpotato_Fries,
    Mashed_Potatoes,
    Coconut_Rice,
    Basmati_Rice,
    Cauliflower_Rice,
    Deepfried_PotatoSkins,
    GarlicBread,
    Accordian_Potatoes,
    StarchCount
};

enum Side {
    Caesar_Salad,
    CheeseStuffed_Peppers,
    Pasta_Salad,
    Onion_Rings,
    Creamed_Spinach,
    Spicy_Cabbage_Slaw,
    Fried_Pickle_Chips,
    Feta_Olive_Salad,
    ColeSlaw,
    PumpkinFritters,
    SideCount
};*/

// Define menu items with their names and prices
// CHECK IF THE TYPES AND PREP TIME IS CORRECT
/*  MealComponent meatOptions[] = {
        {2, 65.0, "Chicken", 1},
        {1, 85.0, "Beef", 1},
        {1, 75.0, "Pork", 1},
        {2, 95.0, "Fish", 1},
        {1, 70.0, "Plant-Based Meat", 1}
    };

    MealComponent starchOptions[] = {
        {2, 40.0, "Garlic Butter Quinoa", 2},
        {1, 30.0, "French Fries", 2},
        {2, 35.0, "Sweet Potato Fries", 2},
        {2, 40.0, "Mashed Potatoes", 2},
        {2, 45.0, "Coconut Rice", 2},
        {1, 35.0, "Basmati Rice", 2},
        {2, 40.0, "Cauliflower Rice", 2},
        {1, 35.0, "Deep-fried Potato Skins", 2},
        {2, 25.0, "Garlic Bread", 2},
        {1, 45.0, "Accordian Potatoes", 2}
    };

    MealComponent sideOptions[] = {
        {1, 20.0, "Caesar Salad", 3},
        {1, 50.0, "Cheese-Stuffed Peppers", 3},
        {1, 35.0, "Pasta Salad", 3},
        {2, 30.0, "Onion Rings", 3},
        {1, 25.0, "Creamed Spinach", 3},
        {1, 20.0, "Spicy Cabbage Slaw", 3},
        {2, 30.0, "Fried Pickle Chips", 3},
        {2, 40.0, "Feta Olive Salad", 3},
        {2, 25.0, "Cole Slaw", 3},
        {1, 45.0, "Pumpkin Fritters", 3}
    };
    */

/// @brief function to return the cost of the meal component.
/// @return the cost.
float MealComponent::getCost() { return this->_cost; }
/// @brief a function to set the cost of the meal component if you wanted to
/// change it.
/// @param cost the amount to set it to.
void MealComponent::setCost(float cost) { this->_cost = cost; }
/// @brief function to return the name of the meal component.
/// @return the name.
string MealComponent::getName() { return this->name; }
/// @brief function to set the name of a meal component.
/// @param name the name you are going to to set it to.
void MealComponent::setName(string name) { this->name = name; }
/// @brief function to return how long the component will take to make.
/// @return the preptime.
int MealComponent::getPrepTime() { return this->_preptime; }
/// @brief function to set how long the component will take to make.
/// @param prepTime how long it should be set to.
void MealComponent::setPrepTime(int prepTime) { this->_preptime = prepTime; }
/// @brief This creates the meal component.
/// @param prepTime how long the component will take to make.
/// @param cost how much the component will cost.
/// @param name the name of the component.
/// @param type what type of component it is.(to know which chef will prepare
/// it)
MealComponent::MealComponent(int prepTime, float cost, string name, int type) {
  this->name = name;
  this->_cost = cost;
  this->_preptime = prepTime;
  this->type = type;
}
