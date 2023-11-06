#include "KarenCustomer.h"
#include <cstdlib>
#include <ctime>

KarenCustomer::KarenCustomer(MenuItem m) : Customer(m) {
  // TODO - implement KarenCustomer::KarenCustomer

  CustomerUnhappy *karenState = new CustomerUnhappy(4);
  this->setState(karenState);

  std::srand(static_cast<unsigned>(std::time(nullptr)));

  this->readyTime = std::rand() % 3 + 1;
}

void KarenCustomer::decHappiness() {

  float decBy =
      static_cast<float>(rand()) / static_cast<float>(RAND_MAX) * 2.0f;

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
