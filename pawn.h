#ifndef pawn_h
#define pawn_h

#include "piece.h"

class Pawn : public Piece {
 public:
  Pawn();
  Pawn(const string &_color, const Location &_location);
  ~Pawn();
  bool validMove(const Location &_location);
  string display();
};

#endif
