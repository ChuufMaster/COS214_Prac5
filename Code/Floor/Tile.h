#ifndef TILE_H
#define TILE_H
#include <string>
#include <vector>

class Tile {

private:
  std::string symbol = " "; /// Default Symbol
  int xDim;
  int yDim;

public:
  Tile(int x, int y); /// Must be modified in UML to include params
  Tile();
  int getx();
  int gety();
  void setx(int x);
  void sety(int y);
  std::string getSym();
  void setSym(std::string s);

  /**
   * @brief Used in the Floor toString method to print the floor
   *
   * @details Returns a 3x3 grid representation of the individual tiles on the
   * floor so that the toString method for the floor can print out the floor
   * properly
   * @see Floor::toString()
   * @return std::vector<std::vector<std::string>>
   */
  virtual std::vector<std::vector<std::string>> toString() = 0;
};

#endif
