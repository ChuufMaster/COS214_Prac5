#ifndef WAITER_H
#define WAITER_H
#include "../Kitchen/KitchenWindow.h"
#include "Order.h"
#include "Table.h"


class Table;
class KitchenWindow;
class Order;
class Waiter {

private:
  std::vector<Table> _tables;
  bool _readyState;
  Table *subject;

public:
  void placeOrder(KitchenWindow *window, Order *order);

  Waiter();

  void update();

  bool available;
};

#endif
