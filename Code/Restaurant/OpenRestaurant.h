#ifndef OPENRESTAURANT_H
#define OPENRESTAURANT_H
#include "Command.h"
#include "MaitreD.h"


class OpenRestaurant : Command {

public:
  bool Restaurant;

  void executeRestaurant();
};

#endif
