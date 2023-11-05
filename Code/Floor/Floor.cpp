#include "Floor.h"
#include "../Restaurant/MaitreD.h"
#include "Path.h"

/**
 * @brief Construct a new Floor:: Floor object taking in the MaitreDs
 *
 * Creates the floor grid and assign all the paths and Tables with their default
 * values and Also sets the MaitreD to be at the door
 *
 * @param MaitreD The MaitreD to be used at the door
 */
Floor::Floor(MaitreD *maitreDTile) {
  this->floor.resize(rowSize, std::vector<Tile *>(colSize, nullptr));
  floor[3][0] = maitreDTile;
  maitreDTile->setx(3);
  maitreDTile->sety(0);
  maitreDTile->setSym('M');

  for(int row = 0; row < rowSize; row++){
    if(row != 3)
        floor[row][0] = new Path(0, row);
  }

  for (int row = 0; row < rowSize; row++) {
    for (int column = 1; column < colSize; column++) {
      if (row % 2 > 0 && column % 2 == 0) {
        Table *newTable = new Table(4, row, column);
        floor[row][column] = newTable;
        maitreDTile->addTable(newTable);
      } else
        floor[row][column] = new Path(row, column);
    }
  }
}

/**
 * @brief Prints out the floor of the restaurant
 *
 * Uses the ToString() functions for all the Tiles to print out the floor
 *
 * @see ToString
 */
void Floor::print() {
  int outputLength = std::string("Below is the restaurant layout:").length();
  outputLength = (80 - outputLength) / 2;
  std::cout << std::string(outputLength, ' ')
            << "Below is the restaurant layout:" << std::endl
            << "   ";

  for (int c = 0; c < colSize; c++) {
    /// prints out the column indices
    std::cout << " " << c + 1 << " ";
  }

  std::cout << std::endl << "   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";

  for (int r = 0; r < rowSize; r++) {

    std::cout << "   ";
    for (int c = 0; c < colSize; c++) {
      if (this->floor[r][c]->getSym() == ' ') {
        std::cout << "   ";
      } else {
        if (r > 0) {
          if (this->floor[r][c]->getSym() == ' ') {
            std::cout << "\x1b[0m"
                      << "___";
          } else {
            std::cout << "   ";
          }
        } else if (r == 0) {
          std::cout << "\x1b[0m"
                    << "___";
        }
      }
    }
    std::cout << std::endl;

    std::cout << " " << r << " ";

    for (int c = 0; c < rowSize; c++) {
      if (this->floor[r][c]->getSym() == ' ') {
        std::cout << "| |";
      } else {
        std::cout << "\x1b[0m|";

        /// Tables printed in yellow
        if (this->floor[r][c]->getSym() == 'T') {
          std::cout << "\x1b[33mT";
        }
        /// Customers printed in green
        else if (this->floor[r][c]->getSym() == 'C') {
          std::cout << "\x1b[32m" << this->floor[r][c]->getSym() << "\x1b[0m";
        }
        /// Maitre D printed in red
        else if (this->floor[r][c]->getSym() == 'M') {
          std::cout << "\x1b[31m" << this->floor[r][c]->getSym() << "\x1b[0m";
        } else {
          /// Reset text color to default
          std::cout << this->floor[r][c]->getSym();
        }
        std::cout << "\x1b[0m|";
      }
    }

    std::cout << std::endl << "   ";

    for (int c = 0; c < colSize; c++) {
      std::cout << "‾‾‾";
    }
  }
  std::cout << std::endl;
}

/**
 * @brief Replace the tile in the floor with the new tile that has the same
 * coords
 *
 * Takes in A Tile pointer that then uses the x and y of that Tile to replace
 * the Tile at the same coordinates in the floor with the new Tile
 *
 * @param newTile The tile that will be used to replace a Tile
 */
void Floor::changeTile(Tile *newTile) {
  int x = newTile->getx();
  int y = newTile->gety();
  if (x >= 0 && x < rowSize && y >= 0 && y < colSize) {
    /// Replace the tile at (x, y) with the newTile
    floor[x][y] = newTile;
  }
  /// else invalid dimensions
}

Tile *Floor::getTile(int x, int y) {
  if (x >= 0 && x < rowSize && y >= 0 && y < colSize) {
    return floor[x][y];
  }
  return NULL;
}

std::string Floor::toString(){
    return "";
}
