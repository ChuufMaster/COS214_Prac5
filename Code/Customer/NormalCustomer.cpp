#include "NormalCustomer.h"
#include <cstdlib>
#include <ctime>

NormalCustomer::NormalCustomer(MenuItem m) : Customer(m) {
  // TODO - implement NormalCustomer::NormalCustomer
  CustomerHappy *normalState = new CustomerHappy(7);
  this->setState(normalState);
  std::srand(static_cast<unsigned>(std::time(nullptr)));
  this->readyTime = std::rand() % 2 + 1;
}

void NormalCustomer::decHappiness() {

  float decBy =
      static_cast<float>(rand()) / static_cast<float>(RAND_MAX) * 1.0f;

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