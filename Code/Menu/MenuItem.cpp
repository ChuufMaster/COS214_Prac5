#include "MenuItem.h"
using namespace std;
/// @brief MenuItems make up the menu. they use the MealComponents to make up an item. They can also bmake a new submenu. 
float MenuItem::getCost() {
	return this->_cost;
}

void MenuItem::setCost(float cost) {
	this->_cost = cost;
}

string MenuItem::getName() {
	return this->name;
}

void MenuItem::setName(string name) {
	this->name = name;
}

int MenuItem::getPrepTime() {
	return this->_prepTime;
}

void MenuItem::setPrepTime(int prepTime) {
	this->_prepTime = prepTime;
}

void MenuItem::addMenu(Menu* Menu) {
	nextItem.push_back(Menu);
}

void MenuItem::print() {
	cout<<this->name<<" R"<<this->_cost<<" Approximate wait time is "<<this->_prepTime<<endl;
}

MenuItem::~MenuItem() {
	for (Menu* menu : nextItem) {
		delete menu;
	}
}

MenuItem::MenuItem(MealComponent* mealComponentArr, Plating* plating) {
	this->name = mealComponentArr->getName();
	this->_cost = mealComponentArr->getCost() + plating->getAddedCost();
	this->_prepTime = mealComponentArr->getPrepTime();
}
