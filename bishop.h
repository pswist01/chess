#ifndef bishop_h
#define bishop_h

#include "piece.h"

class Bishop : Piece {
 public:
  Bishop();
  Bishop(string color);
  ~Bishop();
  bool validMove(Location location);
  char display(){return 'B';}
}
#endif
