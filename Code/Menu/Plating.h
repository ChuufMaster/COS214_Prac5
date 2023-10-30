#ifndef PLATING_H
#define PLATING_H

class Plating
{
public:
    Plating(float _addedCost = 0.0);
    float getAddedCost();
    void setAddedCost(float cost);

    virtual void plating() = 0;
    virtual ~Plating() {}

private:
    float _addedCost;
};

class Basic : public Plating
{
public:
    Basic();
    void plating() override;
};

class Luxury : public Plating
{
public:
    Luxury(int cost);
    void plating() override;
};

class Halloween : public Plating
{
public:
    Halloween(int cost);
    void plating() override;
};

#endif // PLATING_H
