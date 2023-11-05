#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "../Floor/Table.h"
#include "../Floor/Tile.h"
#include "CustomerHappy.h"
#include "CustomerUnhappy.h"
#include "NotReadyToOrder.h"
#include "ReadyToOrder.h"


class Table;
class CustomerHappinessState;
class CustomerReadyState;
class Customer : Tile {

private:
  CustomerHappinessState *_happyState;
  CustomerReadyState *_readyState;
  Table *table;
  friend class Table;

public:
  Customer(int x, int y);

  ~Customer();

  bool getHappiness();

  bool getReadyToOrder();

  void setState(CustomerHappinessState *state);

  void setState(CustomerReadyState *state);

  bool happy();

  int readyToOrder();

protected:
  CustomerHappinessState *getHappinessState();

  CustomerReadyState *getReadyState();
};

#endif
