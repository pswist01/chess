#ifndef board_h
#define board_h

#include "piece.h"

class Board {
 public:
  Board();
  ~Board();
  void reset();
  void display();
  void move(Piece piece, Location location);

 private:
  Piece activePieces[];
  Piece takenPieces[];
  bool whitesTurn;
  int players;
  Piece board[][];
}
#endif
