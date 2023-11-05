#include "Plating.h"

Plating::Plating() {}

/// @brief All the different plating options that form part of the decorator
/// design pattern.
float Plating::getAddedCost() { return this->_addedCost; }

void Plating::setAddedCost(float addedCost) { this->_addedCost = addedCost; }
/// @brief keeps the meal the same cost for just basic plating.
Basic::Basic() { this->setAddedCost(0); }
/// @brief changes the price of the meal if they are using the luxury plate.
Luxury::Luxury() { this->setAddedCost(100); }
/// @brief changes the price of the meal if they are using the bokke plate.
Bokke::Bokke() { this->setAddedCost(11.12); }
