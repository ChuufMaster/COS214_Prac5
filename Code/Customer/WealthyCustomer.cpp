#include "WealthyCustomer.h"

int WealthyCustomer::getReservedTable() { return this->_reservedTable; }

void WealthyCustomer::setReservedTable(int reservedTable) {
  this->_reservedTable = reservedTable;
}

WealthyCustomer::WealthyCustomer() : Customer() {
  CustomerHappinessState *happiness = new CustomerHappy();
  this->setState(happiness);
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  this->readyTime = std::rand() % 2 + 1;
}