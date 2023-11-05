#ifndef NOTREADYTOORDER_H
#define NOTREADYTOORDER_H
#include "CustomerReadyState.h"

class NotReadyToOrder : CustomerReadyState {

public:
  bool _readyToOrder;

  int handleWaiter(Table *c);

  bool getReadyToOrder();
};

#endif
