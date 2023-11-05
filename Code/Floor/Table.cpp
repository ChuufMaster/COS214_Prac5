#include "Table.h"
#include "../Customer/Customer.h"
#include "../Floor/Order.h"
#include "../Kitchen/KitchenWindow.h"

Table::Table(int numChairs, int x, int y) : Tile(x, y) {
  this->numChairs = numChairs;
  // this->setSym('T');
  customers = {new Customer(MenuItem()), new Customer(MenuItem()),
               new Customer(MenuItem()), new Customer(MenuItem())};
}

void Table::addCustomer(Customer *c) {

  c->table = this;
  this->customers.insert(customers.end(), c);
  numOccupied++;
}

void Table::attach(Waiter *waiter) { this->waiter = waiter; }

void Table::detach(Waiter *waiter) { this->waiter = NULL; }

void Table::notify(KitchenWindow *k) {

  if (this->readyToOrder == this->numOccupied) {
    this->waiter->placeOrder(k, order);
    // notify can happen by round, checking if the readyToROder number is equal
    // to the chairs at the table
  } else {
    return;
  }
}

/// function to decrement the ready value of all customers at a table, use once
/// per round

void Table::decAll() {
  for (unsigned int i = 0; i < customers.size(); i++) {
    customers[i]->decReadiness();
    customers[i]->decHappiness();
  }
}

std::vector<std::vector<std::string>> Table::toString() {
  std::vector<std::vector<std::string>> tile = {
      {"╔ ", customers[0]->toString(), " ╗"}, /**< Top row */
      {"╣" + customers[1]->toString(), symbol,
       customers[2]->toString() + "╠"},        /**< Middle row */
      {"╚ ", customers[3]->toString(), " ╝"} /**< Bottom row */
  };
  return tile;
}
