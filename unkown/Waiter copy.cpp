#include "Waiter copy.h"

void Waiter::placeOrder(KitchenWindow window, Order *order) {
  while (window.full == true) {
  }
  window.attach(this);
  this->available = false;
  window.makeOrder(order);
}

Waiter::Waiter() {
  // TODO - implement Waiter::Waiter
  throw "Not yet implemented";
}

void Waiter::update() {
  // TODO - implement Waiter::update
  throw "Not yet implemented";
}
