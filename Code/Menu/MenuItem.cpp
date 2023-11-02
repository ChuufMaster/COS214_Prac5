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

void MenuItem::addMenu(Menu* Menu){
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

std::vector<MealComponent*> MenuItem::getComponents()
{
	return this->components;
}

MenuItem::MenuItem(std::string name, std::vector<MealComponent*> mealComponent, Plating* plating) {
	this->name = name;
	this->_cost = plating->getAddedCost();
	this->_prepTime = 0;
	this->components = mealComponent;
	for (MealComponent* component : mealComponent)
	{
		this->_cost += component->getCost();
		if (component->getPrepTime() > _prepTime)
		{
			this->_prepTime = component->getPrepTime();
		}
	}
}
