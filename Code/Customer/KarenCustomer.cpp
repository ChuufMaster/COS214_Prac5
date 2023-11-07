#include "KarenCustomer.h"
#include <cstdlib>
#include <ctime>

/**
 * @brief KarenCustomer constructor
 *
 * @details Sets the state of the Customer to happy by default, and assigns a randomly generated number
 * between 1 and 3 to Customers readyTime
 *
 */

KarenCustomer::KarenCustomer() : Customer() {
  CustomerHappinessState *happiness = new CustomerHappy();
  this->setState(happiness);
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  this->readyTime = std::rand() % 2 + 1;
}