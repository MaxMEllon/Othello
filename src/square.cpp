#include "square.hpp"

Square::Square() {
  piece = new Piece();
}

Square::~Square() {}

void Square::changePieceColor(std::string color)
{
  piece->changeColor(color);
}

std::string Square::getPieceColor()
{
  return piece->getColor();
}

void Square::setPieceColor(std::string color)
{
  piece->setColor(color);
}
