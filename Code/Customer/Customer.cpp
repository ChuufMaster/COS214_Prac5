#include "Customer.h"
#include "../Menu/MenuItem.h"
#include "CustomerHappinessState.h"
#include "CustomerReadyState.h"
/// @brief All of the code relating to the customer states.
Customer::Customer(int x, int y, MenuItem m) : Tile(x, y) {
  // TODO - implement Customer::Customer
  this->setSym('C');
  this->order = m;
  
}

Customer::~Customer() {
  delete _happyState;
  delete _readyState;
}

bool Customer::getHappiness() { return this->_happyState->getHappiness(); }

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

int Customer::readyToOrder() { return this->_readyState->handleWaiter(this->table); }

CustomerHappinessState *Customer::getHappinessState() {
  return this->_happyState;
}

CustomerReadyState *Customer::getReadyState() { return this->_readyState; }

void Customer::decReadiness(){
  if(readyTime > 0){
    readyTime--;
  }
}
