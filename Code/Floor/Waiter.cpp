#include "Waiter.h"

void Waiter::placeOrder(KitchenWindow *window, Order *order) {
  this->available = false;
  window->enqueue(order);
}

Waiter::Waiter(KitchenWindow *k) {
  this->window = k;
}

void Waiter::update(Table * T) {
  T->isServed = true;
}
