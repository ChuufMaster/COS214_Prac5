#include "Customer.h"
#include "MenuItem.h"
#include "CustomerHappinessState.h"
#include "CustomerReadyState.h"
#include "ReadyToOrder.h"
/// @brief All of the code relating to the customer states.
Customer::Customer(MenuItem m) { this->order = m; }

Customer::Customer() {}

Customer::~Customer() {
  delete _happyState;
  delete _readyState;
}

bool Customer::getHappiness() { return this->_happyState->getHappiness(this); }

bool Customer::getReadyToOrder() {
  return this->_readyState->getReadyToOrder(this);
}

void Customer::setState(CustomerHappinessState *state) {
  this->_happyState = state;
}

void Customer::setState(CustomerReadyState *state) {

  this->_readyState = state;
}

CustomerHappinessState *Customer::getHappinessState() {
  return this->_happyState;
}

CustomerReadyState *Customer::getReadyState() { return this->_readyState; }

/**
 * @brief Returns the Customers Representation
 *
 * @details Returns either a smiling or frowning face depending on if the
 * customer is happy or not
 *
 * @return A string that represents the customer visually
 */
std::string Customer::toString() { return symbol; }
