#include "FryCook.h"
/// @brief this just handles the 'cooking' of the food. it checks which chefs
/// should handle this meal.
/// @param meal we use the meal component to figure out of which type it is.
void FryCook::cook(MealComponent *meal) {
  if (meal->type == 3) {
    // wait certain time
  } else {
    _successor->cook(meal);
  }
}
/// @brief this just sets the successor of the chef.
FryCook::FryCook(Chef *chef) { this->_successor = chef; }
