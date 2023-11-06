#ifndef WEALTHYCUSTOMER_H
#define WEALTHYCUSTOMER_H
#include "Customer.h"

class WealthyCustomer : public Customer {

public:
  int customerHappiness = 8;

  WealthyCustomer();
  int _reservedTable;

  int getReservedTable();

  void setReservedTable(int reservedTable);

  void decHappiness();

  WealthyCustomer(MenuItem m);
};

#endif
