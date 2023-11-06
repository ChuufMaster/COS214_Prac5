#include "MeatMaster.h"
/// @brief this just handles the 'cooking' of the food. it checks which chefs
/// should handle this meal.
/// @param meal we use the meal component to figure out of which type it is.
void MeatMaster::cook(MealComponent *meal) {
  if (meal->type == 2) {
    std::cout << "The MeatMaster is preparing the " << meal->getName()
              << std::endl;
  } else {
    _successor->cook(meal);
  }
}
/// @brief this just sets the successor of the chef.
MeatMaster::MeatMaster(Chef *chef) { this->_successor = chef; }
