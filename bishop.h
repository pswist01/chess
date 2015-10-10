#ifndef bishop_h
#define bishop_h

#include "piece.h"

class Bishop : public Piece {
 public:
  Bishop() { }
 Bishop(string _color) : Piece(_color) { }
  ~Bishop() { }
  bool validMove(Location location) { return false; }
  string display(){return color+"B";}
};

#endif
