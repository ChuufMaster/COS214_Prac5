#ifndef WEALTHYCUSTOMER_H
#define WEALTHYCUSTOMER_H
#include "Customer.h"

class WealthyCustomer : public Customer {

public:
  WealthyCustomer();
  int _reservedTable;

  int getReservedTable();

  void setReservedTable(int reservedTable);

  void decHappiness();
};

#endif
