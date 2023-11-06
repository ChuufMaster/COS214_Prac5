#ifndef MAITRED_H
#define MAITRED_H
#include "../Floor/TableIterator.h"
#include "../Floor/Tile.h"
#include "Command.h"
#include "Customer.h"

#include <random>

class MaitreD : public Tile {

  friend class TableIterator;

private:
  Command *_OpenCommand;
  Command *_CloseCommand;

  Table *_head;

  std::string symbol = "M";

public:
  std::vector<Customer *> Customers;

  MaitreD();
  MaitreD(Command *, Command *);

  void seatCustomer(bool reserved, Customer *Customer);

  void openRestaurant();

  void closeRestaurant();

  Customer *spawnCustomer();

  void addTable(Table *);
  Table *removeTable();
  bool isEmpty();
  TableIterator begin();
  TableIterator end();

  std::vector<std::vector<std::string>> toString();
};

#endif
