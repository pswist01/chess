#ifndef king_h
#define king_h

#include "piece.h"

class King : public Piece {
 public:
  King() { }
 King(string _color) : Piece(_color) { }
  ~King() { }
  bool validMove(Location location) { return false; }
  string display(){return color + "K";}
};

#endif
