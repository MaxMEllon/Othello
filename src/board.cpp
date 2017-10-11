#include "board.hpp"

Board::Board()
{
  this->resize(9, 9);
}

Board::resize(int width, int height) {
  this->width = width;
  this->height = height;
  board = std::vector<std::vector<Square*>>(height, std::vector<Square*>(width, 0));
  for ( const auto i : board ) {
    i = new std::vector<Square*>(width);
    for ( const auto& square : i ) {
      square = new Square();
    }
  }
}
