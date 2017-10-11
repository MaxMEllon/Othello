#ifndef BOARD_HPP
#define BOARD_HPP

#include "square.hpp"

class Board
{
public:
  Board();
  ~Board();

  void resize(int height, int width); 

  Board& operator=(const Board& other) = default;    // 後でちゃんと作る必要あり？

private:
  std::vector<std::vector<Square*>> board;
  int height;    // 縦
  int width;    // 横
};


#endif // BOARD_HPP
