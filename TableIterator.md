# Table of Contents

- [Table of Contents](#table-of-contents)
  - [Changes](#changes)
    - [New functions](#new-functions)

## Changes

- [ ] Added operator overloading to actually be inline with Iterator pattern
- [ ] Made MaitreD a friend Class
- [ ] Added constructor fo taking in MaitreD as aggregate

### New functions

```c++
Table &operator*();
TableIterator operator++();
bool operator==(const TableIterator &) const;
```
