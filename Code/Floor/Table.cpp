#include "Table.h"
#include "Customer.h"
#include "KitchenWindow.h"
#include "Order.h"

Table::Table(int numChairs, int x, int y) : Tile(x, y) {
  customers.resize(4, nullptr);

  this->isServed = false;
}

void Table::addCustomers(std::vector<Customer *> c) {
  numOccupied = 0;
  _isOpen = false;
  for (int i = 0; i < 4; i++) {
    this->customers[i] = c[i];
    if (c[i] != nullptr) {
      numOccupied++;
    }
  }
}

void Table::attach(Waiter *waiter) { this->waiter = waiter; }

void Table::detach(Waiter *waiter) { this->waiter = NULL; }

void Table::notify() {

  if (isServed) {
    isServed = false;
    return;
  }
  bool sendOrder = false;
  bool happiness = false;

  for (int i = 0; i < numOccupied; i++) {
    sendOrder = customers[i]->getReadyToOrder();
  }

  if (sendOrder && order == NULL) {

    std::vector<MenuItem *> theOrder;
    for (int i = 0; i < numOccupied; i++) {
      theOrder.push_back(customers[i]->order);
    }
    order = new Order(this, waiter, theOrder);
    waiter->placeOrder(order);
  }

  if (sendOrder) {
    for (int i = 0; i < numOccupied; i++)
      happiness = customers[i]->getHappiness();
    if (happiness) {
      _isOpen = true;
      for (int i = 0; i < numOccupied; i++)
        delete customers[i];
      customers.resize(4, nullptr);
    }
  }
}

std::vector<std::vector<std::string>> Table::toString() {
  std::string guest[4] = {" ", " ", " ", " "};
  for (int i = 0; i < numOccupied; i++) {
    guest[i] = customers[i]->toString();
  }

  std::vector<std::vector<std::string>> tile = {
      {"╔ ", guest[0], " ╗"},                   /**< Top row */
      {"╣" + guest[1], symbol, guest[2] + "╠"}, /**< Middle row */
      {"╚ ", guest[3], " ╝"}                    /**< Bottom row */
  };
  return tile;
}
