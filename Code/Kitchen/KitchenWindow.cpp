#include "KitchenWindow.h"

void KitchenWindow::notifyWaiter() {
	waitingWaiters->update();
	this->detach(waitingWaiters);
}

void KitchenWindow::startCooking(MenuItem Meal) {
	for (MealComponent* component : Meal.getComponents()) {
		Chefs->cook(component);
	}
	//wait for prep time
	this->notifyWaiter();
}

KitchenWindow::KitchenWindow(Chef* Chefs) {
	this->Chefs = Chefs;
	this->Chefs = new MichelinChef(new MeatMaster(new FryCook(new BasicChef())));
}

void KitchenWindow::makeOrder(Order* order) {
	for (MenuItem item : order->getOrder())
	{
		this->startCooking(item);
	}
}

void KitchenWindow::attach(Waiter* waiter) {
	this->waitingWaiters = waiter;
	this->full = true;
}

void KitchenWindow::detach(Waiter* waiter) {
	this->waitingWaiters = nullptr;
	this->full = false;
}
