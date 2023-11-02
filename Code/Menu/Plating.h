#ifndef PLATING_H
#define PLATING_H

class Plating
{
public:
    Plating();
    float getAddedCost();
    void setAddedCost(float cost);
    virtual ~Plating() {}

private:
    float _addedCost;
};

class Basic : public Plating
{
public:
    Basic();
};

class Luxury : public Plating
{
public:
    Luxury();
};

class Bokke : public Plating
{
public:
    Bokke();
};

#endif // PLATING_H
