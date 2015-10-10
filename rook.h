#ifndef rook_h
#define rook_h

#include "piece.h"

class Rook : public Piece {
 public:
  Rook() { }
 Rook(string _color) : Piece(_color) { }
  ~Rook() { }
  bool validMove(Location location) { return false; }
  string display(){return color+"R";}
};

#endif
