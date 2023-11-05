#ifndef MAITRED_H
#define MAITRED_H
#include "../Floor/TableIterator.h"
#include "../Floor/Tile.h"
#include "Command.h"
#include "Customer.h"


class MaitreD : public Tile {
private:
  Command *_OpenCommand;
  Command *_CloseCommand;
  TableIterator *_Iterator;

public:
  Table *_head;
  std::vector<Customer *> Customers;

  MaitreD();

  TableIterator* createTableIterator();

  void seatCustomer(bool reserved, Customer *Customer);

  void openRestaurant();

  void closeRestaurant();

  Customer *spawnCustomer();
};

#endif
