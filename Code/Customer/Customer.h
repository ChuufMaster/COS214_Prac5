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
class Customer {

private:
  CustomerHappinessState *_happyState;
  CustomerReadyState *_readyState;
  Table *table;
  friend class Table;

  std::string symbol;
  // std::string symbol = "C";

public:
  Customer();

  ~Customer();

  MenuItem *order;

  int readyTime = 2;

  int customerHappiness;

  bool getHappiness();

  bool getReadyToOrder();

  void setState(CustomerHappinessState *state);

  void setState(CustomerReadyState *state);

  std::string toString();

protected:
  CustomerHappinessState *getHappinessState();

  CustomerReadyState *getReadyState();
};

#endif
