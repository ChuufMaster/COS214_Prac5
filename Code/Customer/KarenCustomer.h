#ifndef KARENCUSTOMER_H
#define KARENCUSTOMER_H
#include "Customer.h"

class KarenCustomer : Customer {

public:
  KarenCustomer(MenuItem m);
  void decHappiness();
};

#endif
