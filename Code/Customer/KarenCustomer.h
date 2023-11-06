#ifndef KARENCUSTOMER_H
#define KARENCUSTOMER_H
#include "Customer.h"

class KarenCustomer :public Customer {

public:
  KarenCustomer(MenuItem m);
  KarenCustomer();
  void decHappiness();
};

#endif
