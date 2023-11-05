#include "CloseRestaurant.h"
#include "Command.h"

CloseRestaurant::CloseRestaurant() {}

void CloseRestaurant::executeRestaurant() { restaurant.isOpen = false; }
