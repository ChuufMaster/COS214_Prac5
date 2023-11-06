#ifndef PLATING_H
#define PLATING_H

#include <cstdlib>
#include <ctime>
#include <string>

class Plating {
public:
    Plating(const std::string& name);
    Plating *getPlating();
    float getAddedCost() const;
    const std::string& getName() const;
    void setAddedCost(float cost);
    virtual ~Plating() {}

private:
    float _addedCost;
    std::string _name;
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
