#include "WealthyCustomer.h"

int WealthyCustomer::getReservedTable() { return this->_reservedTable; }

/**
 * @brief Sets reserved table of Customer
 *
 * @details Sets the reserved table of the WealthyCustomer
 * 
 * @param reservedTable the integer value to set the _reservedTable member to
 */

void WealthyCustomer::setReservedTable(int reservedTable) {
  this->_reservedTable = reservedTable;
}

/**
 * @brief WealthyCustomer constructor
 *
 * @details Sets the state of the Customer to happy by default, and assigns a randomly generated number
 * between 1 and 3 to Customers readyTime
 *
 */

WealthyCustomer::WealthyCustomer() : Customer() {
  CustomerHappinessState *happiness = new CustomerHappy();
  this->setState(happiness);
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  this->readyTime = std::rand() % 2 + 1;
}