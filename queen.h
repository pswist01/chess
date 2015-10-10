#ifndef queen_h
#define queen_h

#include "piece.h"

class Queen : public Piece {
 public:
  Queen() { }
 Queen(string _color) : Piece(_color) { }
  ~Queen() { }
  bool validMove(Location location) { return false; }
  string display(){return color+"Q";}
};

#endif
