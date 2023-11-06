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
  bool _isOpen = true;

  Waiter *waiter;

  bool _isReserved = false;

  Order *order;

  bool isServed;

  //std::string symbol = "☐ ";
  //std::string symbol = "⛒";
  //std::string symbol = "⚪";
  std::string symbol = " ";

public:
  std::vector<Customer *> customers;

  int tableNumber;

  Table *next;

  Table *previous;

  int numChairs = 4;

  int numOccupied = 0;

  int readyToOrder;

  Table(int numChairs, int x, int y);

  void addCustomers(std::vector<Customer *>);

  void attach(Waiter *waiter);

  void detach(Waiter *waiter);

  void notify();

  void decAll();

  std::vector<std::vector<std::string>> toString();
};

#endif
