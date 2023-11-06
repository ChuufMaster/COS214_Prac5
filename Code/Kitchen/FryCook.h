#ifndef FRYCOOK_H
#define FRYCOOK_H
#include "Chef.h"
class FryCook : public Chef {

public:
  std::string cook(MealComponent *meal);

  FryCook(Chef *chef);
};

#endif
