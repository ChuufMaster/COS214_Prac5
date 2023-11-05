#ifndef PATH_H
#define PATH_H

#include "Tile.h"

class Path : public Tile {
private:
  std::string symbol = " ";
  int xDim;
  int yDim;

public:
  Path(int, int);

  std::vector<std::vector<std::string>> toString();
};

#endif // !PATH_H
