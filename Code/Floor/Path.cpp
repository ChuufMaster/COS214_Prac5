#include "Path.h"

/**
 * @brief Construct a new Path:: Path object and assign its symbol and coords
 *
 * @param x co-ordinate
 * @param y co-ordinate
 */
Path::Path(int x, int y) : Tile(x, y) { symbol = '='; }

/**
 * @brief Used in the Floor toString method to print the floor
 *
 * @details Returns a 3x3 grid representation of the individual tiles on the
 * floor so that the toString method for the floor can print out the floor
 * properly
 *
 * @return std::vector<std::vector<std::string>>
 */
std::vector<std::vector<std::string>> Path::toString() {
  std::vector<std::vector<std::string>> oldtile = {
      {"  ", "║", "  "}, /**< Top row */
      {"══", "╬", "══"}, /**< Middle row */
      {"  ", "║", "  "}  /**< Bottom row */
  };
  std::vector<std::vector<std::string>> othertile = {
      {"▛", "▀", "▜"}, /**< Top row */
      {"▍", "█", "▐"}, /**< Middle row */
      {"▙", "▄", "▟"}  /**< Bottom row */
  };

  std::vector<std::vector<std::string>> tile = {
      {"  ", " ", "  "}, /**< Top row */
      {"  ", " ", "  "}, /**< Middle row */
      {"  ", " ", "  "}  /**< Bottom row */
  };
  return tile;
}