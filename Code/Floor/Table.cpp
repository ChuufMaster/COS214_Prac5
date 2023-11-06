#include "Table.h"
#include "../Customer/Customer.h"
#include "../Floor/Order.h"
#include "../Kitchen/KitchenWindow.h"

Table::Table(int numChairs, int x, int y) : Tile(x, y) {
  this->numChairs = numChairs;
  // this->setSym('T');
  customers.resize(4, nullptr);
  /*customers = {new Customer(MenuItem()), new Customer(MenuItem()),
               new Customer(MenuItem()), new Customer(MenuItem())};*/
}

void Table::addCustomers(std::vector<Customer *> c) {
  //std::cout << "adding a custoemr" << std::endl;
  numOccupied = 0;

  for(int i = 0; i < 4; i++){
    this->customers[i] = c[i];
    if(c[i] != nullptr){
      numOccupied++;
    }
  }
  //this->customers = c;
}


void Table::attach(Waiter *waiter) { this->waiter = waiter; }

void Table::detach(Waiter *waiter) { this->waiter = NULL; }

void Table::notify(KitchenWindow *k) {

  if (this->readyToOrder == this->numOccupied) {

    std::vector<MenuItem> theOrder;

    for(unsigned int i = 0 ; i < customers.size();i++){
      theOrder.push_back(customers[i]->order);
    }

    this->order = new Order(this, this->waiter, theOrder);

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
