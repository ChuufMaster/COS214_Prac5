#include "Plating.h"
/// @brief All the different plating options that form part of the decorator design pattern.

float Plating::getAddedCost() {
	return this->_addedCost;
}

void Plating::setAddedCost(float addedCost) {
	this->_addedCost = addedCost;
}

Basic::Basic() {
	this->setAddedCost(0);
}

Luxury::Luxury() {
	this->setAddedCost(100);
}

Bokke::Bokke() {
	this->setAddedCost(11.12);
}
 