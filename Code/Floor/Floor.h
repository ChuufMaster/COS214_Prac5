#ifndef FLOOR_H
#define FLOOR_H

#include "Tile.h"
#include <iostream>
#include <vector>

class MaitreD;
class Floor {
public:
  Floor(MaitreD *);
  void print();
  void changeTile(Tile *newTile);
  Tile *getTile(int x, int y);
  std::string toString();

private:
  std::vector<std::vector<Tile *>>
      floor; /** A 7x7 grid representing the floor*/

  /**
   * @brief The max number of rows allowed for the grid
   */
  const int rowSize = 7;

  /**
   * @brief The max number of columns allowed for the grid
   *
   */
  const int colSize = 7;
};

#endif
