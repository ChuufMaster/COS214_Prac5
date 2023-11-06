#ifndef CUSTOMERREADYSTATE_H
#define CUSTOMERREADYSTATE_H
// #include "Customer.h"
#include "../Floor/Table.h"

class Table;
class CustomerReadyState {

private:
  bool _readyToOrder;
  friend class Table;

public:
  CustomerReadyState();

  virtual ~CustomerReadyState();

  virtual bool getReadyToOrder(Customer *) = 0;
};

#endif
