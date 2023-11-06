#ifndef NOTREADYTOORDER_H
#define NOTREADYTOORDER_H
#include "CustomerReadyState.h"

class Table;

class NotReadyToOrder : public CustomerReadyState {
  bool _readyToOrder;
  int _timeTillReady = 3;

public:
  bool getReadyToOrder(Customer *c);
};

#endif
