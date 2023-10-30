#include "Customer.h"

Customer::Customer() {
	// TODO - implement Customer::Customer
	throw "Not yet implemented";
}

Customer::~Customer() {
	delete _happyState;
	delete _readyState;
}

bool Customer::getHappiness() {
	return this->_happyState->getHappiness();
}

bool Customer::getReadyToOrder() {
	return this->_readyState->getReadyToOrder();
}

void Customer::setState(CustomerHappinessState* state) {
	this->_happyState = state;
}

void Customer::setState(CustomerReadyState* state) {
	this->_readyState = state;
}

bool Customer::happy() {
	this->_happyState->handle(this);
}

int Customer::readyToOrder() {
	this->_readyState->handleWaiter(this);
}

CustomerHappinessState* Customer::getHappinessState() {
	return this->_happyState;
}

CustomerReadyState* Customer::getReadyState() {
	return this->_readyState;
}
