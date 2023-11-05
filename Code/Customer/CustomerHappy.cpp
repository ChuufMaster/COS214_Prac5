#include "CustomerHappy.h"

/// @brief The code that will execute when the customer is happy.
CustomerHappy::CustomerHappy(float h) : CustomerHappinessState(h) {}

bool CustomerHappy::handle(Customer *c) { return true; }

bool CustomerHappy::getHappiness() { return this->_happy; }
