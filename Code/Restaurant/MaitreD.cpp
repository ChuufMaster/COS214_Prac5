#include "MaitreD.h"

MaitreD::MaitreD() {
  // TODO - implement MaitreD::MaitreD
  // throw "Not yet implemented";
}

TableIterator *MaitreD::createTableIterator() { return NULL; }

void MaitreD::seatCustomer(bool reserved, Customer *Customer) {
  // TODO - implement MaitreD::seatCustomer
  throw "Not yet implemented";
}

void MaitreD::closeRestaurant() {
  // TODO - implement MaitreD::executeRestaurant
  throw "Not yet implemented";
}

void MaitreD::openRestaurant() {
  // TODO - implement MaitreD::executeRestaurant
  throw "Not yet implemented";
}

Customer *MaitreD::spawnCustomer() {
  // TODO - implement MaitreD::spawnCustomer
  throw "Not yet implemented";
}

/**
 * @brief Add a table to the list of tables
 *
 * Will add the passed in table to the list of tables that the MaitreD must look
 * at
 *
 * @param table The table to be added
 */
void MaitreD::addTable(Table *table) {}

/**
 * @brief Removes the table with the same tableNumber
 *
 * Searches through the list of tables for a table with the same table number
 * and removes that table
 *
 * @param tableNumber The table number of the table to be removed
 * @return A pointer to the table that is being removed
 */
Table *MaitreD::removeTable(int tableNumber) { return 0; }

/**
 * @brief Checks if the list of tables is empty
 *
 * Checks if the head is a nullptr and returns true if it is and false if it
 * isn't
 *
 * @return true if the list is empty
 * @return false if the list has tables
 */
bool MaitreD::isEmpty() { return false; }

/**
 * @brief Returns A tableIterator with current being the head
 *
 * Is used for when iterating over the list to start at the beginning of the
 * list, it is used in conjuction with end()
 *
 * @return A new TableIterator with the current being the head
 */
TableIterator MaitreD::begin() { return TableIterator(*this, _head); }

/**
 * @brief Returns a TableIterator with the current being the end
 *
 * Is used for iterating over the list of tables and returns a TableIterator
 * with the current being the end of the list so that when a for loop is used it
 * doesn't go out of bounds, it is used in conjunction with begin()
 *
 * @return A new TableIterator with the current being the end of the list
 */
TableIterator MaitreD::end() { return TableIterator(*this, _head->previous); }