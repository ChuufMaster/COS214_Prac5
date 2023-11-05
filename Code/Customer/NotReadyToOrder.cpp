#include "NotReadyToOrder.h"
#include "../Floor/Table.h"
/// @brief this code that will execute when the customer is not ready to order
/// yet.
int NotReadyToOrder::handleWaiter(Table *t) {
  // TODO - implement NotReadyToOrder::handleWaiter
  t->readyToOrder--;
  return t->readyToOrder;
}

bool NotReadyToOrder::getReadyToOrder() { return this->_readyToOrder; }
