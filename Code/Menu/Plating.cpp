#include "Plating.h"

/// @brief All the different plating options that form part of the decorator
/// design pattern.
Plating *Plating::getPlating()
{
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    int randomIndex = std::rand() % 3;
    switch (randomIndex) {
        case 0:
            return new Basic();
        case 1:
            return new Luxury();
        case 2:
            return new Bokke();
        default: 
            return nullptr;
    }

}

Plating::Plating(const std::string& name) : _name(name) {}

float Plating::getAddedCost() const {
    return _addedCost;
}

const std::string& Plating::getName() const {
    return _name;
}

void Plating::setAddedCost(float cost) {
    _addedCost = cost;
}
/// @brief keeps the meal the same cost for just basic plating.
Basic::Basic() : Plating("Basic") {
    setAddedCost(0);
}
/// @brief changes the price of the meal if they are using the luxury plate.
Luxury::Luxury() : Plating("Luxury") {
    setAddedCost(100);
}
/// @brief changes the price of the meal if they are using the bokke plate.
Bokke::Bokke() : Plating("Bokke") {
    setAddedCost(11.12);
}

