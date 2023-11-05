#ifndef CLOSERESTAURANT_H
#define CLOSERESTAURANT_H
#include "Command.h"

class CloseRestaurant : Command {

public:
  bool Restaurant;

  void executeRestaurant();
};

#endif
