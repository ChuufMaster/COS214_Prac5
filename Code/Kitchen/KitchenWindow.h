#ifndef KITCHENWINDOW_H
#define KITCHENWINDOW_H
#include "Chef.h"
#include "Waiter.h"
#include "Order.h"
#include "MenuItem.h"
#include "MichelinChef.h"
#include "FryCook.h"
#include "MeatMaster.h"
#include "BasicChef.h"

class KitchenWindow {

public:
	Chef* Chefs;
	bool full;
private:
	Waiter* waitingWaiters;

public:
	void notifyWaiter();

	void startCooking(MenuItem Meal);

	KitchenWindow(Chef* Chefs);

	void makeOrder(Order* order);

	void attach(Waiter* waiter);

	void detach(Waiter* waiter);
};

#endif
