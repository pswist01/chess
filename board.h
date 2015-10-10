#ifndef board_h
#define board_h

#include "piece.h"

const int BOARD_HEIGHT = 8;
const int BOARD_WIDTH = 8;
const int PIECES_ON_BOARD = 32;
const int NUM_PAWNS = 8;
const int TEAM_PIECES = 16;

class Board {
 public:
  Board();
  ~Board();
  void reset();
  void display();
  void move(Piece piece, Location location);

 private:
  Piece takenPieces[PIECES_ON_BOARD];
  bool whitesTurn;
  int players;
  Piece *board[BOARD_WIDTH][BOARD_HEIGHT];
};

#endif
