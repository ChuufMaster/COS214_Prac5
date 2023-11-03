#ifndef MAITRED_H
#define MAITRED_H
#include "../Floor/TableIterator.h"
#include "../Floor/Tile.h"
#include "Customer.h"

class MaitreD : public Tile {
private :
_OpenCommand : Command*;
_CloseCommand : Command*;
_Iterator : TableIterator*;
public:
  Table *_head;
  std::vector<Customer *> Customers;


  MaitreD();

  TableIterator createTableIterator();

  void seatCustomer(bool reserved, Customer *Customer);

  void openRestaurant();

  void closeRestaurant();

  Customer *spawnCustomer();
};

#endif
