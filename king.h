#ifndef king_h
#define king_h

#include "piece.h"

class King : Piece {
 public:
  King();
  ~King();
  bool validMove(Location location);
}
#endif
