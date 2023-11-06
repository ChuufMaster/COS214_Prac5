#include "MichelinChef.h"
/// @brief this just handles the 'cooking' of the food. it checks which chefs
/// should handle this meal.
/// @param meal we use the meal component to figure out of which type it is.
std::string MichelinChef::cook(MealComponent *meal) {
  if (meal->type == 1) {
    return "The Michelin Chef is preparing the " + meal->getName();
  } else {
    return _successor->cook(meal);
  }
}
/// @brief this just sets the successor of the chef.
MichelinChef::MichelinChef(Chef *chef) { this->_successor = chef; }
