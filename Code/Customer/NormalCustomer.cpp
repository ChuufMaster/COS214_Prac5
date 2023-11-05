#include "NormalCustomer.h"

NormalCustomer::NormalCustomer(int x, int y) : Customer(x, y) {
  // TODO - implement NormalCustomer::NormalCustomer
  throw "Not yet implemented";
  CustomerHappy *normalState = new CustomerHappy(5);
  this->setState(normalState);
}
