#include "CustomerHappy.h"
#include "Customer.h"
#include "CustomerUnhappy.h"

/// @brief The code that will execute when the customer is happy.
CustomerHappy::CustomerHappy() {}

bool CustomerHappy::handle(Customer *c) { return true; }

bool CustomerHappy::getHappiness(Customer *c) {
  if (c->customerHappiness-- == 0) {
    CustomerUnhappy *unhappy = new CustomerUnhappy();
    c->setState(unhappy);
  }
  return false;
}
