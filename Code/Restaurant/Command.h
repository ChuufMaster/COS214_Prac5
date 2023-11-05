#ifndef COMMAND_H
#define COMMAND_H

#include "Restaurant.h"
//class Restaurant;
class Command {
public:
  Restaurant& restaurant = Restaurant::_restaurant();
  Command();
  virtual void executeRestaurant() = 0;
};

#endif // !COMMAND_H
