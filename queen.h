#ifndef queen_h
#define queen_h

#include "piece.h"

class Queen : public Piece {
 public:
  Queen();
  Queen(const string &_color, const Location &_location);
  ~Queen();
  bool validMove(const Location &_location);
  string display();
};

#endif
