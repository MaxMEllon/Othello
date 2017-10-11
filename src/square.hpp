#ifndef SQUARE_HPP
#define SQUARE_HPP

#include "piece.hpp"

class Square
{
public:
  Square();
  ~Square();

Square& operator=(const Square& other) = default;    // 代入演算子

  void changePieceColor(std::string color);
  std::string getPieceColor();
  void setPieceColor(std::string color);

private:
  Piece* piece;
};

#endif // SQUARE_HPP
