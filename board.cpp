#include <iostream>

#include "board.h"
#include "piece.h"
#include "king.h"
#include "queen.h"
#include "bishop.h"
#include "knight.h"
#include "rook.h"
#include "pawn.h"

using namespace std;

const int BOARD_HEIGHT = 8;
const int BOARD_LENGTH = 8;
const int PIECES_ON_BOARD = 32;
const int NUM_PAWNS = 8;
const int TEAM_PIECES = 16;

Board::Board()
{
  activePieces[PIECES_ON_BOARD];
  for (int i = 0; i < PIECES_ON_BOARD; i++){
    activePieces[i] = null;
  }
  takenPieces[PIECES_ON_BOARD];
  for (int i = 0; i < PIECES_ON_BOARD; i++){
    takenPieces[i] = null;
  }
  whitesTurn = true;
  players = 2;
  board[BOARD_LENGTH][BOARD_HEIGHT];
  for (int i = 0; i < BOARD_LENGTH; i++){
      for (int j = 0; j < BOARD_HEIGHT; j++){
	board[i][j] = null;
      }
  }
}

Board::~Board()
{
  //nothing yet
}

void Board::reset()
{
  //clear everything
  activePieces[PIECES_ON_BOARD];
  for (int i = 0; i < PIECES_ON_BOARD; i++){
    activePieces[i] = null;
  }
  takenPieces[PIECES_ON_BOARD];
  for (int i = 0; i < PIECES_ON_BOARD; i++){
    takenPieces[i] = null;
  }
  for (int i = 0; i < BOARD_LENGTH; i++){
      for (int j = 0; j < BOARD_HEIGHT; j++){
	board[i][j] = null;
      }
  }
  
  //white
  activePieces[0] = King(white);
  activePieces[1] = Queen(white);
  activePieces[2] = Bishop(white);
  activePieces[3] = Bishop(white);
  activePieces[4] = Knight(white);
  activePieces[5] = Knight(white);
  activePieces[6] = Rook(white);
  activePieces[7] = Rook(white);
  for (int i = 0; i < NUM_PAWNS; i++){
    activePieces[8 + i] = Pawn(white);
  }
  //black
  activePieces[TEAM_PIECES + 0] = King(black);
  activePieces[TEAM_PIECES + 1] = Queen(black);
  activePieces[TEAM_PIECES + 2] = Bishop(black);
  activePieces[TEAM_PIECES + 3] = Bishop(black);
  activePieces[TEAM_PIECES + 4] = Knight(black);
  activePieces[TEAM_PIECES + 5] = Knight(black);
  activePieces[TEAM_PIECES + 6] = Rook(black);
  activePieces[TEAM_PIECES + 7] = Rook(black);
  for (int i = 0; i < NUM_PAWNS; i++){
    activePieces[TEAM_PIECES + 8 + i] = Pawn(black);
  }

  //setup white
  board[0][0] = activePieces[6];//R
  board[1][0] = activePieces[4];//N
  board[2][0] = activePieces[2];//B
  board[3][0] = activePieces[1];//Q
  board[4][0] = activePieces[0];//K
  board[5][0] = activePieces[3];//B
  board[6][0] = activePieces[5];//N
  board[7][0] = activePieces[7];//R
  for (int i = 0; i < NUM_PAWNS; i++) {//P
    board[i][1] = activePieces[8 + i];
  }
  //setup black
  board[0][7] = activePieces[TEAM_PIECES + 6];//R
  board[1][7] = activePieces[TEAM_PIECES + 4];//N
  board[2][7] = activePieces[TEAM_PIECES + 2];//B
  board[3][7] = activePieces[TEAM_PIECES + 1];//Q
  board[4][7] = activePieces[TEAM_PIECES + 0];//K
  board[5][7] = activePieces[TEAM_PIECES + 3];//B
  board[6][7] = activePieces[TEAM_PIECES + 5];//N
  board[7][7] = activePieces[TEAM_PIECES + 7];//R
  for (int i = 0; i < NUM_PAWNS; i++) {//P
    board[i][6] = activePieces[TEAM_PIECES + 8 + i];
  }

  whitesTurn = true;
}

void Board::display()
{

}

void Board::move(Piece piece, Location location)
{

}
