#include "KarenCustomer.h"
#include <cstdlib>
#include <ctime>

KarenCustomer::KarenCustomer(MenuItem m) : Customer(m) {

  // CustomerUnhappy *karenState = new CustomerUnhappy(4);
  CustomerHappinessState *happiness = new CustomerHappy();
  this->setState(happiness);

  std::srand(static_cast<unsigned>(std::time(nullptr)));

  this->readyTime = std::rand() % 3 + 1;
}

KarenCustomer::KarenCustomer() {}