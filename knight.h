#ifndef knight_h
#define knight_h

#include "piece.h"

class Knight : Piece {
 public:
  Knight();
  ~Knight();
  bool validMove(Location location);
}
#endif
