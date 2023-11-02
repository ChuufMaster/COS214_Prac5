#ifndef ORDER_H
#define ORDER_H
#include "MenuItem.h"
#include "Table.h"
#include "Waiter.h"

class Table;
class Waiter;

class Order {

private:
	std::vector<MenuItem> order;
public:
	Table* table;
	Waiter* waiter;
	std::vector<MenuItem>getOrder();
	Order();
};

#endif

