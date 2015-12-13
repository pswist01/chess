#ifndef rook_h
#define rook_h

#include "piece.h"

class Rook : public Piece {
 public:
  Rook();
  Rook(const string &_color, const Location &_location);
  ~Rook();
  bool validMove(const Location &_location);
  string display();
};

#endif
