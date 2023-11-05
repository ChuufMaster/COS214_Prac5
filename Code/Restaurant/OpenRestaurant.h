#ifndef OPENRESTAURANT_H
#define OPENRESTAURANT_H
#include "Command.h"

class OpenRestaurant :public Command {

public:

  OpenRestaurant();
  void executeRestaurant();
};

#endif
