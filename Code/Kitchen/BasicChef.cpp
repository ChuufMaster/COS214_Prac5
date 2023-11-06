#include "BasicChef.h"
/// @brief this just handles the 'cooking' of the food. it checks which chefs
/// should handle this meal.
/// @param meal we use the meal component to figure out of which type it is.
void BasicChef::cook(MealComponent *meal) {
  if (meal->type == 4) {
    std::cout << "The Basic Chef is preparing the " << meal->getName()
              << std::endl;
  }
}
/// @brief this just sets the successor of the chef.
BasicChef::BasicChef() { _successor = nullptr; }
