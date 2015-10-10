#ifndef pawn_h
#define pawn_h

#include "piece.h"

class Pawn : public Piece {
 public:
  Pawn() { }
 Pawn(string _color) : Piece(_color) { }
  ~Pawn() { }
  bool validMove(Location location) { return false; }
  string display(){return color+'P';}
};

#endif
