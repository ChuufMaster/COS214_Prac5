#ifndef NOTREADYTOORDER_H
#define NOTREADYTOORDER_H
#include "CustomerReadyState.h"

class Table;

class NotReadyToOrder : public CustomerReadyState {

public:
  bool _readyToOrder;

  int handleWaiter(Table *c);

  bool getReadyToOrder();
};

#endif
