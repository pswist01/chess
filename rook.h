#ifndef rook_h
#define rook_h

#include "piece.h"

class Rook : Piece {
 public:
  Rook();
  ~Rook();
  bool validMove(Location location);
}
#endif
