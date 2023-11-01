#include "MealComponent.h"
using namespace std;
/// @brief A mel component forms part of a menuItem, it is the indiidual parts of a meal.
float MealComponent::getCost() {
	return this->_cost;
}

void MealComponent::setCost(float cost) {
	this->_cost = cost;
}

string MealComponent::getName() {
	return this->name;
}

void MealComponent::setName(string name) {
	this->name = name;
}

int MealComponent::getPrepTime() {
	return this->_preptime;
}

void MealComponent::setPrepTime(int prepTime) {
	this->_preptime = prepTime;
}

MealComponent::MealComponent(int prepTime, float cost, string name) {
	this->name = name;
	this->_cost = cost;
	this->_preptime = prepTime;
}
