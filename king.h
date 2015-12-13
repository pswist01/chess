#ifndef king_h
#define king_h

#include "piece.h"

class King : public Piece {
 public:
  King();
  King(const string &_color, const Location &_location);
  ~King();
  bool validMove(const Location &_location);
  string display();

 private:
  bool hasMoved;
};

#endif
