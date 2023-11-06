#include "Plating.h"

/// @brief All the different plating options that form part of the decorator
/// design pattern.
Plating::Plating(const std::string &name) : _name(name) {}

const std::string &Plating::getName() const { return _name; }

/// @brief keeps the meal the same cost for just basic plating.
Basic::Basic() : Plating("Basic") { setAddedCost(0); }
/// @brief changes the price of the meal if they are using the luxury plate.
Luxury::Luxury() : Plating("Luxury") { setAddedCost(100); }
/// @brief changes the price of the meal if they are using the bokke plate.
Bokke::Bokke() : Plating("Bokke") { setAddedCost(11.12); }
