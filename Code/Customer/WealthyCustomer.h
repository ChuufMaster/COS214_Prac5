#ifndef WEALTHYCUSTOMER_H
#define WEALTHYCUSTOMER_H
#include "Customer.h"

class WealthyCustomer : Customer {

public:
  int _reservedTable;

  int getReservedTable();

  void setReservedTable(int reservedTable);

  void decHappiness();

  WealthyCustomer(MenuItem m);
};

#endif
