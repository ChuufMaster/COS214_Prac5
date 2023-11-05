#include "CustomerUnhappy.h"

CustomerUnhappy::CustomerUnhappy(float h) : CustomerHappinessState(h) {}

/// @brief The code that will execute when the customer is unhappy.
bool CustomerUnhappy::handle(Customer *c) { return false; }

bool CustomerUnhappy::getHappiness() { return this->_happy; }
