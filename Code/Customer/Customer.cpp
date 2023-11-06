#include "Customer.h"
#include "../Menu/MenuItem.h"
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

float Customer::getHappiness() { return this->_happyState->getHappiness(); }

bool Customer::getReadyToOrder() {
  return this->_readyState->getReadyToOrder();
}

void Customer::setState(CustomerHappinessState *state) {
  this->_happyState = state;
}

void Customer::setState(CustomerReadyState *state) {

  this->_readyState = state;
  readyToOrder();
}

bool Customer::happy() { return this->_happyState->handle(this); }

int Customer::readyToOrder() {
  return this->_readyState->handleWaiter(this->table);
}

CustomerHappinessState *Customer::getHappinessState() {
  return this->_happyState;
}

CustomerReadyState *Customer::getReadyState() { return this->_readyState; }

/// decrements ready time per round (with Table decAll() function), then if it
/// reaches 0 sets readyState to readytoorder

void Customer::decReadiness() {
  if (readyTime > 0) {
    readyTime--;
  } else {
    CustomerReadyState *newState = new ReadyToOrder();
    this->setState(newState);
  }
}

void Customer::decHappiness() {}

/**
 * @brief Returns the Customers Representation
 *
 * @details Returns either a smiling or frowning face depending on if the
 * customer is happy or not
 *
 * @return A string that represents the customer visually
 */
std::string Customer::toString() { return symbol; }