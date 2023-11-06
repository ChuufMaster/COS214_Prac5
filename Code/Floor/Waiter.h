#ifndef WAITER_H
#define WAITER_H
#include "KitchenWindow.h"
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
  void placeOrder(Order *order);

  Waiter(KitchenWindow *k);

  void update(Table *t);

  bool available;

  KitchenWindow *window;
};

#endif
