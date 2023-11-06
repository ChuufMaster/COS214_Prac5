#ifndef WEALTHYCUSTOMER_H
#define WEALTHYCUSTOMER_H
#include "Customer.h"

class WealthyCustomer : public Customer {

public:
  int customerHappiness = 8;

  WealthyCustomer();
  int _reservedTable = 0;

  int getReservedTable();

  void setReservedTable(int reservedTable);
};

#endif
