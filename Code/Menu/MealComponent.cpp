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
/*MealComponent meatOptions[] = {
        {20, 65.0, "Chicken", 1},
        {25, 85.0, "Beef", 1},
        {30, 75.0, "Pork", 1},
        {20, 95.0, "Fish", 1},
        {15, 70.0, "Plant-Based Meat", 1}
    };*/

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
