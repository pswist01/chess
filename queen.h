#ifndef queen_h
#define queen_h

#include "piece.h"

class Queen : Piece {
 public:
  Queen();
  Queen(string color);
  ~Queen();
  bool validMove(Location location);
  char display(){return 'Q';}
}
#endif
