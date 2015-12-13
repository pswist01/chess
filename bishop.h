#ifndef bishop_h
#define bishop_h

#include "piece.h"

class Bishop : public Piece {
 public:
  Bishop();
  Bishop(const string &_color, const Location &_location);
  ~Bishop();
  bool validMove(const Location &_location);
  string display();
};

#endif
