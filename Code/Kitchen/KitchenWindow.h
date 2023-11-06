#ifndef KITCHENWINDOW_H
#define KITCHENWINDOW_H
#include "Order.h"
#include "BasicChef.h"
#include "Chef.h"
#include "FryCook.h"
#include "MeatMaster.h"
#include "MenuItem.h"
#include "MichelinChef.h"
#include "Waiter.h"
#include <queue>

class Waiter;
class Order;

class KitchenWindow {

public:
  Chef *Chefs;
  bool full;

private:
  std::queue<Order*> waitingOrders;
  std::vector<Order*> currentOrders;
  int maxWaiters;
  int currentWaiters;
  int roundCounter;
public:
  void notifyWaiter();

  void startCooking(MenuItem Meal);

  KitchenWindow();

  void makeOrder(Order *order);

  void incRound();

  void enqueue(Order *order);
};

#endif
