#include "KarenCustomer.h"
#include <cstdlib>
#include <ctime>

KarenCustomer::KarenCustomer() : Customer() {
  CustomerHappinessState *happiness = new CustomerHappy();
  this->setState(happiness);
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  this->readyTime = std::rand() % 2 + 1;
}