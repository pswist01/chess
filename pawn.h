#ifndef pawn_h
#define pawn_h

#include "piece.h"

class Pawn : Piece {
 public:
  Pawn();
  Pawn(string color);
  ~Pawn();
  bool validMove(Location location);
}

#endif
