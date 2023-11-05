# Table of Contents

- [Table of Contents](#table-of-contents)
  - [Changes](#changes)
    - [New Functions](#new-functions)

## Changes

- [ ] Made TableIterator a friend class
- [ ] Moved head into Private
- [ ] Added functions to make MaitreD an aggregate
- [ ] Removed createTableIterator and associated Variable
- [ ] Removed pointer to a table iterator

### New Functions

```c++
  MaitreD(Command*, Command*);
  void addTable(Table *);
  Table *removeTable();
  bool isEmpty();
  TableIterator begin();
  TableIterator end();
```
