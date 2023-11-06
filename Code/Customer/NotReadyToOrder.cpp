#include "NotReadyToOrder.h"
#include "../Floor/Table.h"
#include "ReadyToOrder.h"
#include "Customer.h"
/// @brief this code that will execute when the customer is not ready to order
/// yet.
bool NotReadyToOrder::handleWaiter(Customer *t) {
  // TODO - implement NotReadyToOrder::handleWaiter
   if (t->readyTime > 0) {
    t->readyTime--;
    return false;
  } else {
    CustomerReadyState *newState = new ReadyToOrder();
    t->setState(newState);
  }
}

bool NotReadyToOrder::getReadyToOrder() { return this->_readyToOrder; }
