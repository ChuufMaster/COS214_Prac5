#ifndef PLATING_H
#define PLATING_H
#include <cstdlib>

class Plating {
public:
  Plating();
  float getAddedCost();
  Plating *getPlating();
  void setAddedCost(float cost);
  virtual ~Plating() {}

private:
  float _addedCost;
};

class Basic : public Plating {
public:
  Basic();
};

class Luxury : public Plating {
public:
  Luxury();
};

class Bokke : public Plating {
public:
  Bokke();
};

#endif // PLATING_H
