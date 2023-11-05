#ifndef READYTOORDER_H
#define READYTOORDER_H
#include "CustomerReadyState.h"

class ReadyToOrder : CustomerReadyState {

public:
  bool _readyToOrder;

  int handleWaiter(Table *c);

  bool getReadyToOrder();
};

#endif
