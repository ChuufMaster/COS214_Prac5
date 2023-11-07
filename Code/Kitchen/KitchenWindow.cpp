#include "KitchenWindow.h"

/// @brief this will notify the waiter when the order is complete.
void KitchenWindow::detach() {
  for (int i = 0; i < maxWaiters; i++) {
    if (!waitingOrders.empty()) {
      this->makeOrder(waitingOrders.front());
      this->currentOrders.push_back(waitingOrders.front());
      waitingOrders.pop();
    }
  }
}

/// @brief this sends the different meal components to the chefs to cook.
/// @param Meal the Meal is split up into mealcomponents.

std::vector<std::string> KitchenWindow::startCooking(MenuItem *Meal) {
  std::vector<std::string> prints;
  for (MealComponent *component : Meal->getComponents()) {
    prints.push_back(Chefs->cook(component));
  }
  return prints;
}

/// @brief this creates the different types of chefs.
KitchenWindow::KitchenWindow() {
  this->Chefs = new MichelinChef(new MeatMaster(new FryCook(new BasicChef())));
  this->currentWaiters = 0;
}

/// @brief this uses the order received from the waiter and sends the menuItem
/// to the start cooking function.
/// @param order the order that the menuitem is taken from.

void KitchenWindow::makeOrder(Order *order) {
  for (MenuItem *item : order->getOrder()) {

    order->prints.push_back(this->startCooking(item));
  }
}

void KitchenWindow::attach(Order *order) {
  if (currentWaiters < maxWaiters) {
    currentWaiters++;
    currentOrders.push_back(order);
    this->makeOrder(order);
  } else {
    waitingOrders.push(order);
  }
}

/**
 * @brief Used by the game loop to Make rounds happen
 *
 * Is called by MaitreD to let the KitchenWindow know that a new round has
 * started
 */
void KitchenWindow::notifyRound() {
  roundCounter++;
  for (Order *order : currentOrders) {
    order->waiter->update(order->table);
    currentOrders.pop_back();
  }
  this->currentWaiters = 0;
  this->detach();
}

KitchenWindow::~KitchenWindow() { delete Chefs; }

std::string KitchenWindow::toString() {
  std::string out = "";
  for (Order *order : currentOrders) {
    if (order != nullptr)
      for (std::vector<std::string> middle : order->prints) {
          for (std::string s : middle) {
            out += s + "\n";
          }
      }
  }
  return out;
}