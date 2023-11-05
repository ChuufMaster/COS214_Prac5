#ifndef WAITER_COPY_H
#define WAITER_COPY_H
#include "KitchenWindow.h"
#include "Order.h"
#include "Table.h"


class Waiter {

private:
  std::vector<Table> _tables;
  bool _readyState;
  Table *subject;

public:
  void placeOrder(KitchenWindow window, Order *order);

  Waiter();

  void update();

  bool available;
};

#endif
