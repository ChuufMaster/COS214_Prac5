#include "ReadyToOrder.h"
#include "../Floor/Table.h"
/// @brief the code that will execute when the customer is ready to order.
int ReadyToOrder::handleWaiter(Table *t) {
  // TODO - implement ReadyToOrder::handleWaiter
  t->readyToOrder++;
  return t->readyToOrder;
}

bool ReadyToOrder::getReadyToOrder() { return this->_readyToOrder; }
