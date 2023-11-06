#include "NormalCustomer.h"
#include "CustomerHappy.h"
#include <cstdlib>
#include <ctime>

NormalCustomer::NormalCustomer(MenuItem m) : Customer(m) {
  CustomerHappinessState *happiness = new CustomerHappy();
  this->setState(happiness);
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  this->readyTime = std::rand() % 2 + 1;
}

NormalCustomer::NormalCustomer() {}