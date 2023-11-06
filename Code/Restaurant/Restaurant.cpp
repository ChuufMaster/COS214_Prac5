#include "Restaurant.h"

void Restaurant::incOccupancy() {
  // TODO - implement Restaurant::incOccupancy
  // throw "Not yet implemented";
  occupancy++; // added
}

Restaurant::Restaurant() { singletonData = 0; }

Restaurant::~Restaurant() {}

Restaurant &Restaurant::_restaurant() {
  static Restaurant onlyInstance_;
  return onlyInstance_;
}

void Restaurant::setFloor(Floor *floor) { _floor = floor; }

/**
 * @brief Returns the string representation of the floor
 * @return A string representation of the floor
 */
std::string Restaurant::getFloor() { return this->_floor->toString(); }