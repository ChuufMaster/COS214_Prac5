#ifndef RESTAURANT_H
#define RESTAURANT_H
#include "../Floor/Floor.h"
class Restaurant {

private:
  // Restaurant *_restaurant; //moved to public
  Floor *_floor;
  int singletonData; // added
  int occupancy;     // added
  Restaurant();
  Restaurant(const Restaurant &) = delete;

public:
  static Restaurant &_restaurant(); /// create singleton instance
  bool isFull;
  bool isOpen;
  void incOccupancy(); // updateSingletonData()
  Restaurant &operator=(const Restaurant &) = delete;
  ~Restaurant();
};

#endif
