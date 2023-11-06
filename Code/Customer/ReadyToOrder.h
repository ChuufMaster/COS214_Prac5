#ifndef READYTOORDER_H
#define READYTOORDER_H
#include "CustomerReadyState.h"

class Table;

class ReadyToOrder : public CustomerReadyState {

public:
  bool _readyToOrder;

  bool handleWaiter(Customer *c);

  bool getReadyToOrder();
};

#endif
