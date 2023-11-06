#include "CustomerUnhappy.h"

CustomerUnhappy::CustomerUnhappy() {}

/// @brief The code that will execute when the customer is unhappy.
bool CustomerUnhappy::handle(Customer *c) { return false; }

bool CustomerUnhappy::getHappiness(Customer *c) { return true; }