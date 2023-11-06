#include "Waiter.h"

void Waiter::placeOrder(Order *order) {
  this->available = false;

  window->attach(order);
}

Waiter::Waiter(KitchenWindow *k) { this->window = k; }

void Waiter::update(Table *T) { T->isServed = true; }
