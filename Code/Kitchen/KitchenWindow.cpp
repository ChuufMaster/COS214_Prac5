#include "KitchenWindow.h"

/// @brief this will notify the waiter when the order is complete.
void KitchenWindow::notifyWaiter() {
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
<<<<<<< HEAD

std::vector<std::string> KitchenWindow::startCooking(MenuItem Meal)
{
  std::vector<std::string> prints;
  
  for (MealComponent *component : Meal.getComponents())
  {
    prints.push_back(Chefs->cook(component));
=======
void KitchenWindow::startCooking(MenuItem Meal) {
  for (MealComponent *component : Meal.getComponents()) {
    Chefs->cook(component);
>>>>>>> 77324988d1bdcdf1851005b823413a5c2692c273
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
<<<<<<< HEAD

void KitchenWindow::makeOrder(Order *order)
{
  for (MenuItem item : order->getOrder())
  {
    order->prints.push_back(this->startCooking(item));
=======
void KitchenWindow::makeOrder(Order *order) {
  for (MenuItem item : order->getOrder()) {
    this->startCooking(item);
>>>>>>> 77324988d1bdcdf1851005b823413a5c2692c273
  }
  // this->detach(order->waiter);
  // order->table->notify(this);
}

/// @brief this finishes the cooking process by opening up a new slot for a
/// waiter.
/// @param waiter the waiter being released to finish the order.
void KitchenWindow::incRound() {
  for (Order *order : currentOrders) {
    order->waiter->update(order->table);
  }
  this->currentWaiters = 0;
  this->notifyWaiter();
}

/// @brief
/// @param order
void KitchenWindow::enqueue(Order *order) {
  if (currentWaiters < maxWaiters) {
    currentWaiters++;
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
void KitchenWindow::notifyRound() { roundCounter++; }
