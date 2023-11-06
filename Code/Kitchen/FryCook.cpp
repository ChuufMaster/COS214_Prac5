#include "FryCook.h"
/// @brief this just handles the 'cooking' of the food. it checks which chefs
/// should handle this meal.
/// @param meal we use the meal component to figure out of which type it is.
std::string FryCook::cook(MealComponent *meal) {
  if (meal->type == 3) {
    return "The Frycook is preparing the " + meal->getName();
  } else {
    return _successor->cook(meal);
  }
}
/// @brief this just sets the successor of the chef.
FryCook::FryCook(Chef *chef) { this->_successor = chef; }
