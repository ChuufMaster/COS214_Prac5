#ifndef MICHELINCHEF_H
#define MICHELINCHEF_H
// #include "MealComponent.h"
#include "Chef.h"

class MichelinChef : public Chef {

public:
  void cook(MealComponent *meal);

  MichelinChef(Chef *chef);
};

#endif
