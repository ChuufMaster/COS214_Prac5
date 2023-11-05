#ifndef TABLE_H
#define TABLE_H
#include "Customer.h"
#include "Tile.h"
#include "Waiter.h"


class Waiter;

class Table : public Tile {

public:
  bool _isOpen;

  Waiter *waiter;

  bool _isReserved;

  Order* order;

public:
  std::vector<Customer *> customers;

  int tableNumber;

  Table *next;

  Table *previous;

  int numChairs;

  int numOccupied;

  int readyToOrder;

  Table(int numChairs, int x, int y);

  void addCustomer(Customer *customer);

  void attach(Waiter *waiter);

  void detach(Waiter *waiter);

  void notify(KitchenWindow *k);

  void decAll();
};

#endif
