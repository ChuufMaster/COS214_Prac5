/// @file MenuItem.h
/// @brief Definition of the MenuItem class.

#include "MenuItem.h"
using namespace std;

/// @brief Getter for the cost of the menu item.
/// @return The cost of the menu item.
float MenuItem::getCost() { return this->_cost; }

/// @brief Setter for the cost of the menu item.
/// @param cost The cost to set for the menu item.
void MenuItem::setCost(float cost) { this->_cost = cost; }

/// @brief Getter for the name of the menu item.
/// @return The name of the menu item.
string MenuItem::getName() { return this->name; }

/// @brief Setter for the name of the menu item.
/// @param name The name to set for the menu item.
void MenuItem::setName(string name) { this->name = name; }

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
void MenuItem::print() {
  cout << this->name << " R" << this->_cost << " Approximate wait time is "
       << this->_prepTime << endl;
}

/// @brief Destructor for the MenuItem class.
/// Deletes any submenus associated with the menu item.
MenuItem::~MenuItem() {
  for (Menu *menu : nextItem) {
    delete menu;
  }
}

/// @brief Get the meal components that make up the menu item.
/// @return A vector of MealComponent pointers.
std::vector<MealComponent *> MenuItem::getComponents() {
  return this->components;
}

/// @brief Constructor for the MenuItem class.
/// Initializes the menu item with a name, meal components, and plating
/// information.
MenuItem::MenuItem() {
  Plating* plating  = plating->getPlating();
  this->_cost = plating->getAddedCost();

  MealComponent *component = component->getMeatOption();
  this->name = component->getName();
  this->components.push_back(component);

  component = component->getStarchOption();
  this->name += " and " + component->getName();
  this->components.push_back(component);

  component = component->getSideOption();
  this->name += " with a side of " + component->getName();
  this->components.push_back(component);

  for (MealComponent *component : components) {
    this->_cost += component->getCost();
    if (component->getPrepTime() > _prepTime) {
      this->_prepTime = component->getPrepTime();
    }
  }
}
