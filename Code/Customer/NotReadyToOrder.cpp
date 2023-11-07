#include "NotReadyToOrder.h"
#include "Customer.h"
#include "CustomerReadyState.h"
#include "ReadyToOrder.h"
#include "Table.h"

#include <iostream>

/**
 * @brief Executes when customer is not ready to order
 * 
 * @details Decrements time till customer is ready, and if it reaches 0, sets Customers _readyState 
 * to ReadyToOrder
 * 
 * @param c a pointer to the Customer
 *
 * @return A boolean that represents the Customers readiness to order
 */ 


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
