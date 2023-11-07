#include "CustomerHappy.h"
#include "Customer.h"
#include "CustomerUnhappy.h"

/// @brief The code that will execute when the customer is happy.
CustomerHappy::CustomerHappy() {}

/**
 * @brief Returns true to represent CustomerHappyState as CustomerHappy
 *
 * @return A boolean that represents the Customers happiness
 */

bool CustomerHappy::handle(Customer *c) { return true; }

/**
 * @brief Decrements Customers happiness
 *
 * @details This function decrements the customers happiness (once per round)
 * and if the customerHappiness is less or equal to zero, sets the Customers
 * _happyState to CustomerUnhappy()
 *
 * @param c a pointer to the customer that called the function so that it's
 * state can be updated
 *
 * @return A boolean that represents the Customers happiness
 */

bool CustomerHappy::getHappiness(Customer *c) {
  if (c == nullptr) {
    return false;
  }
  if (c->customerHappiness-- <= 0) {
    CustomerUnhappy *unhappy = new CustomerUnhappy();
    c->setState(unhappy);
  }
  return false;
}
