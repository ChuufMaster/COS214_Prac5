#include "TableIterator.h"
#include "MaitreD.h"

/**
 * @brief Construct a new Table Iterator with default null values
 *
 * This is used for creating an empty table iterator
 */
TableIterator::TableIterator() : head(0), current(0) {}

/**
 * @brief Construct a new Table Iterator setting the head to the MaitreD's first
 * table and current to the passed in table
 *
 * Used for when The maitreD needs to iterate over her tables either from a
 * starting position or not
 *
 * @param source The MaitreD that holds all of the tables
 * @param table The table to be set to the current table
 */
TableIterator::TableIterator(const MaitreD& source, Table *table)
    : head(source._head), current(table) {
      //std::cout << table->getx() << table->gety() << std::endl;
    }

/** @brief Will find and return an open table
 *
 * This function iterates over all the tables until it finds a table with no
 * customers seated at it
 *
 * @return A pointer to a table that has no customers
 */
Table *TableIterator::findOpenTable() { return head; }

/**
 * @brief Returns the table that has the same number as tableNu
 *
 * This function iterates over all the tables and checks the tableNumber of
 * each table to see if it has the same number as tableNum
 *
 * @param tableNum the table Number that will be looked for
 * @return A pointer to the table with the table number
 */
Table *TableIterator::findSpecificTable(int tableNum) { return head; }

/**
 * @brief returns the current table
 *
 * This is used for iterating over the tables so that the current table can be
 * accessed
 *
 * @return Table of the current table
 */
Table* TableIterator::operator*() { return current; }

/**
 * @brief Used for iterating over the tables in a for loop
 *
 * This is used in a similar way that '++' is used to increment a number
 * however it instead sets the current to the currents next
 * and then returns an updated table iterator
 *
 * @return An updated TableIterator
 */
TableIterator TableIterator::operator++() {
  if (this->current != nullptr)
    this->current = this->current->next;
  return *this;
}

/**
 * @brief Checks if the two table iterators have a table who's table number is
 * the same
 *
 * Compares the left hand sides table iterator's current table number to the the
 * table iterator's current table number on the right hand side to see if they
 * are the same
 *
 * @param rhs
 * @return true if the two current tables have the same table number
 * @return false if the two current tables have different table numbers
 */
bool TableIterator::operator==(const TableIterator &rhs) const {
  return current->getx() == rhs.current->getx() && current->gety() == rhs.current->gety();
}

/*bool TableIterator::operator==(int tableNumber) const {
  return current->tableNumber == tableNumber;
}*/