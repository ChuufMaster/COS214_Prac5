#include "CustomerUnhappy.h"

CustomerUnhappy::CustomerUnhappy() {}

/**
 * @brief Returns false to represent CustomerHappyState as CustomerUnhappy
 *
 * @return A boolean that represents the Customers happiness
 */ 

bool CustomerUnhappy::handle(Customer *c) { return false; }

bool CustomerUnhappy::getHappiness(Customer *c) { return true; }