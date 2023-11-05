#include "./Restaurant/MaitreD.h"
#include "./Restaurant/Restaurant.h"
#include <iostream>

int main(int argc, const char **argv) {

  Restaurant &restaurant = Restaurant::_restaurant();
  while (restaurant.isOpen) {
    std::string open;
    std::cout << "Open restaurant?";
    std::getline(std::cin >> std::ws, open);
    std::cout << open << std::endl;
    if (open == "Y" || open == "y") {
      // restaurant
    }
    restaurant.isOpen = false;
  }
  std::cout << "something" << std::endl;

  return 0;
}