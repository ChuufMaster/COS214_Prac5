#ifndef BASICCHEF_H
#define BASICCHEF_H
#include "Chef.h"
class BasicChef : public Chef {

public:
  void cook(MealComponent *meal);

  BasicChef();
};

#endif
