#ifndef ORDER_H
#define ORDER_H
#include "MenuItem.h"
#include "Table.h"
#include "Waiter.h"

class Table;
class Waiter;

class Order {

private:
  std::vector<MenuItem> order;
  
public:
  std::vector<std::vector<std::string>> prints;
  Table *table;
  Waiter *waiter;
  std::vector<MenuItem> getOrder();
  Order(Table *t, Waiter *w, std::vector<MenuItem> m);
};

#endif
