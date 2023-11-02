#include "./Restaurant/Restaurant.h"
#include <iostream>

int main(int argc, const char** argv) {

    Restaurant& restaurant = Restaurant::_restaurant();
    restaurant.incOccupancy();
    std::cout << "something" << std::endl;

    
    return 0;
}