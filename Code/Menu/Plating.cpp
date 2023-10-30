#include "Plating.h"
/// @brief Plating implementation
/// @return 
float Plating::getAddedCost() {
	return this->_addedCost;
}

void Plating::setAddedCost(float addedCost) {
	this->_addedCost = addedCost;
}

void Basic::plating() {
	// TODO - implement Basic::plating
	throw "Not yet implemented";
}

Basic::Basic() {
	this->setAddedCost(0);
}

void Luxury::plating() {
	// TODO - implement Luxury::plating
	throw "Not yet implemented";
}

Luxury::Luxury(int cost) {
	this->setAddedCost(cost);
}

void Halloween::plating() {
	// TODO - implement Halloween::plating
	throw "Not yet implemented";
}

Halloween::Halloween(int cost) {
	this->setAddedCost(cost);
}
