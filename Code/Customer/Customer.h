#ifndef CUSTOMER_H
#define CUSTOMER_H
#include "../Floor/Table.h"
#include "../Floor/Tile.h"
#include "../Menu/MenuItem.h"
#include "CustomerHappy.h"
#include "CustomerUnhappy.h"

class Table;
class CustomerHappinessState;
class CustomerReadyState;
class MenuItem;
class Customer : Tile {

private:
  CustomerHappinessState *_happyState;
  CustomerReadyState *_readyState;
  Table *table;
  friend class Table;

public:
  Customer(int x, int y, MenuItem m);

  ~Customer();

  MenuItem order;

  int readyTime;

  float getHappiness();

  bool getReadyToOrder();

  void setState(CustomerHappinessState *state);

  void setState(CustomerReadyState *state);

  bool happy();

  int readyToOrder();

  void decReadiness();

  void decHappiness();

protected:
  CustomerHappinessState *getHappinessState();

  CustomerReadyState *getReadyState();
};

#endif
