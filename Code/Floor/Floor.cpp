#include "Floor.h"
#include "../Restaurant/MaitreD.h"

Floor::Floor() {
  /// The board is of size 10x8
  for (int r = 0; r < 10; r++) {
    std::vector<Tile *> row;
    for (int c = 0; c < 8; c++) {
      /// Create a new Tile and add it to the current row
      row.push_back(new Tile(r, c));
    }
    /// Add the row to the 2D vector
    floor.push_back(row);
  }

  /// CHECK IF BELOW IS CORRECT!!!!!!!!!!

  /// Sets the first tile in 2D array to maitreD
  MaitreD *maitreDTile = new MaitreD();
  maitreDTile->setx(0);
  maitreDTile->sety(0);
  this->changeTile(maitreDTile);

  /// Sets 6 tables on the board
  for (int r = 1; r <= 7; r += 3) {
    for (int c = 2; c <= 5; c += 3) {
      Table *tableTile = new Table(4, c, r);
      tableTile->setx(c);
      tableTile->sety(r);
      this->changeTile(tableTile);
      // this->floor[r][c].setSym('T');
    }
  }
}

void Floor::print() {
  int outputLength = std::string("Below is the restaurant layout:").length();
  outputLength = (80 - outputLength) / 2;
  std::cout << std::string(outputLength, ' ')
            << "Below is the restaurant layout:" << std::endl
            << "   ";

  for (int c = 0; c < 8; c++) {
    /// prints out the column indices
    std::cout << " " << c + 1 << " ";
  }

  std::cout << std::endl << "   ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾";

  for (int r = 0; r < 10; r++) {

    std::cout << "   ";
    for (int c = 0; c < 8; c++) {
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

    for (int c = 0; c < 8; c++) {
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

    for (int c = 0; c < 8; c++) {
      std::cout << "‾‾‾";
    }
  }
  std::cout << std::endl;
}

void Floor::changeTile(Tile *newTile) {
  int x = newTile->getx();
  int y = newTile->gety();
  if (x >= 0 && x < 8 && y >= 0 && y < 10) {
    /// Replace the tile at (x, y) with the newTile
    floor[x][y] = newTile;
  }
  /// else invalid dimensions
}

Tile *Floor::getTile(int x, int y) {
  if (x >= 0 && x < 8 && y >= 0 && y < 10) {
    return floor[x][y];
  }
  return NULL;
}
