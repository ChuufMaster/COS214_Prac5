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
  bool sendOrder = false;
  bool happiness = false;
  for (int i = 0; i < numOccupied; i++) {
    sendOrder = !sendOrder ? customers[i]->getReadyToOrder() : sendOrder;
  }

  if (sendOrder) {
    for (int i = 0; i < numOccupied; i++)
      happiness = !happiness ? customers[i]->getHappiness() : happiness;
    std::vector<MenuItem> theOrder;
    for (int i = 0; i < numOccupied; i++) {
      theOrder.push_back(customers[i]->order);
    }
    Order *order = new Order(this, waiter, theOrder);
    waiter->placeOrder(order);
  }

  if (happiness) {
    _isOpen = true;
    for (int i = 0; i < numOccupied; i++)
      delete customers[i];
    customers.resize(4, nullptr);
  }
}

std::vector<std::vector<std::string>> Table::toString() {
  std::string guest[4];
  for (int i = 0; i < 4; i++) {
    guest[i] = " ";
    if (customers[i] != nullptr) {
      guest[i] = customers[i]->toString();
    }
  }

  std::vector<std::vector<std::string>> tile = {
      {"╔ ", guest[0], " ╗"},                   /**< Top row */
      {"╣" + guest[1], symbol, guest[2] + "╠"}, /**< Middle row */
      {"╚ ", guest[3], " ╝"}                    /**< Bottom row */
  };
  return tile;
}
