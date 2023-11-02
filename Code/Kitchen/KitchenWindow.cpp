#include "KitchenWindow.h"
/// @brief this will notify the waiter when the order is complete.
void KitchenWindow::notifyWaiter() {
	waitingWaiters->update();
	this->detach(waitingWaiters);
}
/// @brief this sends the different meal components to the chefs to cook.
/// @param Meal the Meal is split up into mealcomponents.
void KitchenWindow::startCooking(MenuItem Meal) {
	for (MealComponent* component : Meal.getComponents()) {
		Chefs->cook(component);
	}
	//wait for prep time
	this->notifyWaiter();
}
/// @brief this creates the different types of chefs.
KitchenWindow::KitchenWindow(Chef* Chefs) {
	this->Chefs = Chefs;
	this->Chefs = new MichelinChef(new MeatMaster(new FryCook(new BasicChef())));
}
/// @brief this uses the order received from the waiter and sends the menuItem to the start cooking function.
/// @param order the order that the menuitem is taken from.
void KitchenWindow::makeOrder(Order* order) {
	for (MenuItem item : order->getOrder())
	{
		this->startCooking(item);
	}
}
/// @brief this links the waiter to the window for the order hey brought in and stops other orders from starting until this one has finished.
/// @param waiter the waiter that is being attached.
void KitchenWindow::attach(Waiter* waiter) {
	this->waitingWaiters = waiter;
	this->full = true;
}
/// @brief this finishes the cooking proces by opening up a new slot for a waiter.
/// @param waiter the waiter being released to finish the order.
void KitchenWindow::detach(Waiter* waiter) {
	this->waitingWaiters = nullptr;
	this->full = false;
}
