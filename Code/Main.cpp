#include "CloseRestaurant.h"
#include "Command.h"
#include "MaitreD.h"
#include "OpenRestaurant.h"
#include "Restaurant.h"
#include <iostream>

int main(int argc, const char **argv) {

  Restaurant &restaurant = Restaurant::_restaurant();
  MaitreD *maitreD = new MaitreD(new OpenRestaurant(),
                                 new CloseRestaurant());
  maitreD->openRestaurant();

  restaurant.setFloor(new Floor(maitreD));
  /*while (restaurant.isOpen) {
    
  }*/

  Floor* test = new Floor(maitreD);

  test->print();
  std::cout << "something" << std::endl;

  return 0;
}