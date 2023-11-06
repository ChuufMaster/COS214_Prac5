#ifndef TABLEITERATOR_H
#define TABLEITERATOR_H
#include "Table.h"

class MaitreD;
class TableIterator {

  friend class MaitreD;

protected:
  Table *head = 0;
  Table *current = 0;

  TableIterator(const MaitreD &, Table *);

public:
  TableIterator();

  Table *findOpenTable();

  Table *findSpecificTable(int);

  Table *operator*();
  TableIterator operator++();
  bool operator==(const TableIterator &) const;
  bool operator==(int) const;
};

#endif
