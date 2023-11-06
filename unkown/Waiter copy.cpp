#include "Waiter copy.h"

void Waiter::placeOrder(KitchenWindow window, Order *order) {
  this->available = false;
  window.enqueue(order);
}

Waiter::Waiter() {
  // TODO - implement Waiter::Waiter
  throw "Not yet implemented";
}

void Waiter::update() {
  // TODO - implement Waiter::update
  throw "Not yet implemented";
}
