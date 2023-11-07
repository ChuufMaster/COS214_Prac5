#include "Customer.h"
#include "CustomerHappinessState.h"
#include "CustomerReadyState.h"
#include "MenuItem.h"
#include "NotReadyToOrder.h"
#include "ReadyToOrder.h"

/// @brief All of the code relating to the customer states.
Customer::Customer() {
  _happyState = new CustomerHappy();
  _readyState = new NotReadyToOrder();
  order = new MenuItem();
  symbol = "☺";
}

Customer::~Customer() {
  /*  delete _happyState;
    delete _readyState;*/
}

/**
 * @brief Returns the Customers happy state
 *
 * @details Executes the getHappiness() function of the CustomerHappinessState
 *
 * @return A boolean that represents the Customers happiness
 */

bool Customer::getHappiness() { return this->_happyState->getHappiness(this); }

/**
 * @brief Returns the Customers ready state
 *
 * @details Executes the getReadyToOrder() function of the CustomerReadyState
 *
 * @return A boolean that represents the Customers readiness to order
 */

bool Customer::getReadyToOrder() {
  return this->_readyState->getReadyToOrder(this);
}

/**
 * @brief Sets the _happyState of the Customer
 *
 * @param state The state to set the _happyState member variable to
 *
 */

void Customer::setState(CustomerHappinessState *state) {
  this->_happyState = state;
}

/**
 * @brief Sets the _readyState of the Customer
 *
 * @param state The state to set the _readyState member variable to
 *
 */

void Customer::setState(CustomerReadyState *state) {
  this->_readyState = state;
}

/**
 * @brief Returns _happyState of the customer
 *
 * @return A boolean that represents the Customers happiness
 */

CustomerHappinessState *Customer::getHappinessState() {
  return this->_happyState;
}

/**
 * @brief Returns the Customers ready state
 *
 * @return A boolean that represents the Customers ready state
 */

CustomerReadyState *Customer::getReadyState() { return this->_readyState; }

/**
 * @brief Returns the Customers Representation
 *
 * @details Returns either a smiling or frowning face depending on if the
 * customer is happy or not
 *
 * @return A string that represents the customer visually
 */
std::string Customer::toString() { return "☺"; }
