#ifndef bishop_h
#define bishop_h

#include "piece.h"

class Bishop : Piece {
 public:
  Bishop();
  ~Bishop();
  bool validMove(Location location);
}
#endif
