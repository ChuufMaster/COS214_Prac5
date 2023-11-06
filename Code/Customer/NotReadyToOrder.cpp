#include "NotReadyToOrder.h"
#include "Customer.h"
#include "CustomerReadyState.h"
#include "ReadyToOrder.h"
#include "Table.h"

#include <iostream>

bool NotReadyToOrder::getReadyToOrder(Customer *c) {
  if (c == nullptr) {
    return false;
  }
  if (c->readyTime-- == 0) {
    CustomerReadyState *ready = new ReadyToOrder();
    c->setState(ready);
    //return true;
  }
  return false;
}

// NotReadyToOrder::NotReadyToOrder() {}
