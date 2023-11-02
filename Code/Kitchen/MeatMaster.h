#ifndef MEATMASTER_H
#define MEATMASTER_H
#include "Chef.h"
class MeatMaster: public Chef {


public:
	void cook(MealComponent *meal);

	MeatMaster(Chef* chef);
};

#endif
