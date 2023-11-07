/// @file MenuItem.h
/// @brief Definition of the MenuItem class.

#include "MenuItem.h"
#include "Plating.h"

/// @brief Getter for the cost of the menu item.
/// @return The cost of the menu item.
float MenuItem::getCost() { return 10.10; }

/// @brief Setter for the cost of the menu item.
/// @param cost The cost to set for the menu item.
void MenuItem::setCost(float cost) { this->_cost = cost; }

/// @brief Getter for the name of the menu item.
/// @return The name of the menu item.
std::string MenuItem::getName() { return this->name; }

/// @brief Setter for the name of the menu item.
/// @param name The name to set for the menu item.
void MenuItem::setName(std::string name) { this->name = name; }

/// @brief Getter for the preparation time of the menu item.
/// @return The preparation time of the menu item.
int MenuItem::getPrepTime() { return this->_prepTime; }

/// @brief Setter for the preparation time of the menu item.
/// @param prepTime The preparation time to set for the menu item.
void MenuItem::setPrepTime(int prepTime) { this->_prepTime = prepTime; }

/// @brief Add a submenu to the menu item.
/// @param Menu A pointer to the submenu to add.
void MenuItem::addMenu(Menu *Menu) { nextItem.push_back(Menu); }

/// @brief Print information about the menu item.
std::string MenuItem::print() {
  return this->name + " R" + std::to_string(this->_cost) +
         ". Approximate wait time is " + std::to_string(this->_prepTime) +
         " round\n";
}

/// @brief Destructor for the MenuItem class.
/// Deletes any submenus associated with the menu item.
MenuItem::~MenuItem() {}

/// @brief Get the meal components that make up the menu item.
/// @return A vector of MealComponent pointers.
std::vector<MealComponent *> MenuItem::getComponents() {
  return this->components;
}

/// @brief Constructor for the MenuItem class.
/// Initializes the menu item with a name, meal components, and plating
/// information.
MenuItem::MenuItem() {
  _prepTime = 0;
  Plating *plating = this->getPlating();
  this->_cost = plating->getAddedCost();

  MealComponent *component = component->getMeatOption();
  this->name = component->getName();
  this->components.push_back(component);

  component = component->getStarchOption();
  this->name += " and " + component->getName();
  this->components.push_back(component);

  component = component->getSideOption();
  this->name += " with a side of " + component->getName() + " on a " +
                plating->getName() + " plate.";
  this->components.push_back(component);

  for (MealComponent *component : components) {
    this->_cost += component->getCost();
    if (component->getPrepTime() > _prepTime) {
      this->_prepTime = component->getPrepTime();
    }
  }
  delete plating;
}

void Plating::setAddedCost(float cost) { _addedCost = cost; }

float Plating::getAddedCost() const { return _addedCost; }

Plating *MenuItem::getPlating() {
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  int randomIndex = std::rand() % 3;
  switch (randomIndex) {
  case 0:
    return new Basic();
  case 1:
    return new Luxury();
  case 2:
    return new Bokke();
  default:
    return nullptr;
  }
}
