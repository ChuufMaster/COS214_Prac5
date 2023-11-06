#include "Order.h"

Order::Order(Table* t, Waiter* w, std::vector<MenuItem> m) {
  // TODO - implement Order::Order
  this->table = t;
  this->waiter = w;
  this->order = m;
}
std::vector<MenuItem> Order::getOrder() { return this->order; }
