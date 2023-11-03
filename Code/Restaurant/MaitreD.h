#ifndef MAITRED_H
#define MAITRED_H
#include "../Floor/TableIterator.h"
#include "../Floor/Tile.h"
#include "Customer.h"

class MaitreD : public Tile {

public:
  Table *_head;
  std::vector<Customer *> Customers;

  MaitreD();

  TableIterator begin();

  TableIterator end();

  void seatCustomer(bool reserved, Customer *Customer);

  void executeRestaurant();

  Customer *spawnCustomer();
};

#endif
