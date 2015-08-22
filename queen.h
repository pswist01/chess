#ifndef queen_h
#define queen_h

#include "piece.h"

class Queen : Piece {
 public:
  Queen();
  ~Queen();
  bool validMove(Location location);
}
#endif