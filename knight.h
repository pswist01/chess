#ifndef knight_h
#define knight_h

#include "piece.h"

class Knight : public Piece {
 public:
  Knight();
  Knight(const string &_color, const Location &_location);
  ~Knight();
  bool validMove(const Location &_location);
  string display();
};

#endif
