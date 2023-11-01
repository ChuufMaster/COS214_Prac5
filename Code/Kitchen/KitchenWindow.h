#ifndef KITCHENWINDOW_H
#define KITCHENWINDOW_H
#include "Chef.h"
#include "Waiter.h"
#include "Order.h"
#include "MenuItem.h"

class KitchenWindow {

public:
	Chef* Chefs;
private:
	Waiter* waitingWaiters;

public:
	void notifyWaiter();

	void startCooking(MenuItem Meal);

	KitchenWindow(Chef* Chefs);

	void makeOrder(Order* order);

	KitchenWindow();

	void attach(Waiter waiter);

	void detach(Waiter waiter);
};

#endif
