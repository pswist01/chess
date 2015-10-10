#ifndef knight_h
#define knight_h

#include "piece.h"

class Knight : public Piece {
 public:
  Knight() { }
 Knight(string _color) : Piece(_color) { }
  ~Knight() { }
  bool validMove(Location location) { return false; }
  string display(){return color+"N";}
};

#endif
