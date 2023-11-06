#ifndef KITCHENWINDOW_H
#define KITCHENWINDOW_H
#include "BasicChef.h"
#include "Chef.h"
#include "FryCook.h"
#include "MeatMaster.h"
#include "MenuItem.h"
#include "MichelinChef.h"
#include "Order.h"
#include "Waiter.h"
#include <queue>

class Waiter;
class Order;

class KitchenWindow {

public:
  Chef *Chefs;
  bool full;

private:
  std::queue<Order *> waitingOrders;
  std::vector<Order *> currentOrders;
  int maxWaiters;
  int currentWaiters;
  int roundCounter = 0;

public:
  void notifyWaiter();

  std::vector<std::string> startCooking(MenuItem Meal);

  KitchenWindow();

  void makeOrder(Order *order);

  void incRound();

  void enqueue(Order *order);

  void notifyRound();
};

#endif
