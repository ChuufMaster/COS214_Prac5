#ifndef OPENRESTAURANT_H
#define OPENRESTAURANT_H
#include "MaitreD.h"
#include "Command.h"

class OpenRestaurant : Command {

public:
	bool Restaurant;

	void executeRestaurant();
};

#endif
