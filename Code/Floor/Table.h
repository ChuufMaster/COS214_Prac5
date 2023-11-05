#ifndef TABLE_H
#define TABLE_H

#include "Tile.h"
#include "Waiter.h"

class Customer;
class Waiter;
class Customer;
class KitchenWindow;
class Order;

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
