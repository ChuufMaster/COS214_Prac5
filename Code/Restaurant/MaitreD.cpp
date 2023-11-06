#include "MaitreD.h"
#include "Customer.h"
#include "KarenCustomer.h"
#include "NormalCustomer.h"
#include "WealthyCustomer.h"

int randomNum(int, int);
/**
 * @brief Construct a new Maitre D:: Maitre D object using the open command and
 * close command
 *
 * @param openCommand
 * @param closeCommand
 */
MaitreD::MaitreD(Command *openCommand, Command *closeCommand)
    : _OpenCommand(openCommand), _CloseCommand(closeCommand) {}

/**
 * @brief Seats the customers at an empty table if it finds one
 *
 *
 * @param reserved boolean indicating if the table is reserved or not
 * @param Customers A vector array of customers to be seated at a table
 */
void MaitreD::seatCustomer(bool reserved, std::vector<Customer *> Customers) {
  TableIterator i;
  for (i = this->begin(); !(i == this->end()); ++i) {
    if ((*i)->_isOpen) {
      (*i)->_isOpen = false;
      (*i)->addCustomers(Customers);
      return;
    }
  }
}

/**
 * @brief Calls the execute function for the CloseCommand to close the
 * restaurant
 *
 */
void MaitreD::closeRestaurant() { _CloseCommand->executeRestaurant(); }

/**
 * @brief Calls the execute function for OpenCommand to open the restaurant
 *
 */
void MaitreD::openRestaurant() { _OpenCommand->executeRestaurant(); }

Customer *MaitreD::spawnCustomer() {
  int randomVal = randomNum(1, 3);
  switch (randomVal) {
  case 1: {
    Customer *karen = new KarenCustomer();
    return karen;
    break;
  }
  case 2: {
    Customer *wealthy = new WealthyCustomer();
    return wealthy;
    break;
  }
  case 3: {
    Customer *normal = new NormalCustomer();
    return normal;
    break;
  }
  }
  return NULL;
}

/**
 * @brief Add a table to the list of tables
 *
 * @details Will add the passed in table to the list of tables that the MaitreD
 * must look at
 *
 * @param newTable The table to be added
 */
void MaitreD::addTable(Table *newTable) {
  //std::cout << newTable->getx() << std::endl;
  if (isEmpty()) {
    newTable->next = newTable;
    newTable->previous = newTable;
  } else {
    newTable->next = _head;
    newTable->previous = _head->previous;
    _head->previous->next = newTable;
    _head->previous = newTable;
  }
  _head = newTable;
}

/**
 * @brief Removes the table that is at the end of the list
 *
 * @details Access the end of the table list and then removes if from the list
 * and returns a pointer to the removed table
 *
 * @return A pointer to the table that is was removed
 */
Table *MaitreD::removeTable() {
  if (isEmpty())
    return 0;

  if (_head->previous == _head) {
    Table *temp = _head;
    _head = 0;
    return temp;
  }

  Table *tmp = _head->previous;
  _head->previous = _head->previous->previous;
  _head->previous->next = _head;
  return tmp;
}

/**
 * @brief Checks if the list of tables is empty
 *
 * @details Checks if the head is a nullptr and returns true if it is and false
 * if it isn't
 *
 * @return true if the list is empty
 * @return false if the list has tables
 */
bool MaitreD::isEmpty() { return _head == 0; }

/**
 * @brief Returns A tableIterator with current being the head
 *
 * @details Is used for when iterating over the list to start at the beginning
 * of the list, it is used in conjuction with end()
 *
 * @return A new TableIterator with the current being the head
 */
TableIterator MaitreD::begin() { return TableIterator(*this, _head); }

/**
 * @brief Returns a TableIterator with the current being the end
 *
 * @details Is used for iterating over the list of tables and returns a
 * TableIterator with the current being the end of the list so that when a for
 * loop is used it doesn't go out of bounds, it is used in conjunction with
 * begin()
 *
 * @return A new TableIterator with the current being the end of the list
 */
TableIterator MaitreD::end() { return TableIterator(*this, _head->previous); }

/**
 * @brief Used in the Floor toString method to print the floor
 *
 * @details Returns a 3x3 grid representation of the individual tiles on the
 * floor so that the toString method for the floor can print out the floor
 * properly
 *
 * @return std::vector<std::vector<std::string>>
 */
std::vector<std::vector<std::string>> MaitreD::toString() {
  std::vector<std::vector<std::string>> tile = {
      {" ╒", "═", "╕ "}, /**< Top row */
      {" │", "M", "☎ "}, /**< Middle row */
      {" ╘", "═", "╛ "}  /**< Bottom row */
  };
  return tile;
}

/**
 * @brief Starts the next round
 *
 * @details Calls all the notify functions for all of the objects that it holds
 *
 */
void MaitreD::notify() {
  std::vector<Customer *> customers(4, nullptr);
  int randomNumGuest = randomNum(1, 4);

  for (int i = 0; i < randomNumGuest; i++)
    customers[i] = spawnCustomer();

  seatCustomer(false, customers);
}

int randomNum(int first, int last) {
  std::random_device rd;  // Used to seed the random number generator
  std::mt19937 gen(rd()); // Mersenne Twister 19937 generator

  int min_value = first;
  int max_value = last;

  // Define a uniform distribution for the range [min_value, max_value]
  std::uniform_int_distribution<int> distribution(min_value, max_value);

  // Generate a random number
  int random_number = distribution(gen);

  // std::cout << "Random number: " << random_number << std::endl;

  return random_number;
}