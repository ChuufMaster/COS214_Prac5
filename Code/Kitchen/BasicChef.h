#ifndef BASICCHEF_H
#define BASICCHEF_H
#include "Chef.h"
class BasicChef : public Chef {

public:
  std::string cook(MealComponent *meal);

  BasicChef();
};

#endif
