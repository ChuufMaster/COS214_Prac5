#include "WealthyCustomer.h"

WealthyCustomer::WealthyCustomer(MenuItem m) : Customer(m) {

  CustomerHappy *wealthyState = new CustomerHappy(8);
  this->setState(wealthyState);
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  this->readyTime = std::rand() % 2 + 1;

}

int WealthyCustomer::getReservedTable() {
  // TODO - implement WealthyCustomer::getReservedTable
  return this->_reservedTable;
}

void WealthyCustomer::setReservedTable(int reservedTable) {
  // TODO - implement WealthyCustomer::setReservedTable
  this->_reservedTable = reservedTable;
}

void WealthyCustomer::decHappiness() {

  float decBy =
      static_cast<float>(rand()) / static_cast<float>(RAND_MAX) * 0.5f;

  float happiness = this->getHappiness();

  float newHappiness = happiness - decBy;

  if (newHappiness >= 5) {

    CustomerHappinessState *cs = new CustomerHappy(newHappiness);

    this->setState(cs);

  } else if (0 < newHappiness && newHappiness < 5) {

    CustomerHappinessState *cs = new CustomerUnhappy(newHappiness);

    this->setState(cs);

  } else if (newHappiness <= 0) {
    // Remove customer from simulation
  }
}

WealthyCustomer::WealthyCustomer(){
  
}