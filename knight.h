#ifndef knight_h
#define knight_h

#include "piece.h"

class Knight : Piece {
 public:
  Knight();
  Knight(string color);
  ~Knight();
  bool validMove(Location location);
  char display(){return 'N';}
}
#endif
