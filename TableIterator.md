# Table of Contents

- [Table of Contents](#table-of-contents)
  - [Changes](#changes)
    - [New functions](#new-functions)

## Changes

- [ ] Added operator overloading to actually be inline with Iterator pattern
- [ ] Made MaitreD a friend Class
- [ ] Added constructor fo taking in MaitreD as aggregate
- [ ] Added a function to test if the current is equal to a table Number

### New functions

```c++
Table &operator*();
TableIterator operator++();
bool operator==(const TableIterator &) const;
bool operator==(int) const;
```
