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
