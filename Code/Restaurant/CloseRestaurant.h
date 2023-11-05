#ifndef CLOSERESTAURANT_H
#define CLOSERESTAURANT_H
#include "Command.h"

class CloseRestaurant : public Command {

public:
  CloseRestaurant();
  void executeRestaurant();
};

#endif
