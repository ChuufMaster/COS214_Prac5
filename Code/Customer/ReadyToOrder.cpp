#include "ReadyToOrder.h"
#include "../Floor/Table.h"
/// @brief the code that will execute when the customer is ready to order.
bool ReadyToOrder::handleWaiter(Customer *t) {
  return true;
}

bool ReadyToOrder::getReadyToOrder() { return this->_readyToOrder; }
