#ifndef PATH_H
#define PATH_H

#include "Tile.h"

class Path : public Tile {
private:
  char symbol = '=';
  int xDim;
  int yDim;

public:
  Path(int, int);
};

#endif // !PATH_H
