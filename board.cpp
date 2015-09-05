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
const int DISPLAY_WIDTH = 18;
const int DISPLAY_HEIGHT = 17;
const string WHITE = "white";
const string BLACK = "black";


Board::Board()
{
  activePieces[PIECES_ON_BOARD];
  for (int i = 0; i < PIECES_ON_BOARD; i++){
    activePieces[i] = NULL;
  }
  takenPieces[PIECES_ON_BOARD];
  for (int i = 0; i < PIECES_ON_BOARD; i++){
    takenPieces[i] = NULL;
  }
  whitesTurn = true;
  players = 2;
  board[BOARD_LENGTH][BOARD_HEIGHT];
  for (int i = 0; i < BOARD_LENGTH; i++){
      for (int j = 0; j < BOARD_HEIGHT; j++){
	board[i][j] = NULL;
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
    activePieces[i] = NULL;
  }
  takenPieces[PIECES_ON_BOARD];
  for (int i = 0; i < PIECES_ON_BOARD; i++){
    takenPieces[i] = NULL;
  }
  for (int i = 0; i < BOARD_LENGTH; i++){
      for (int j = 0; j < BOARD_HEIGHT; j++){
	board[i][j] = NULL;
      }
  }
  
  //white
  activePieces[0] = King(WHITE);
  activePieces[1] = Queen(WHITE);
  activePieces[2] = Bishop(WHITE);
  activePieces[3] = Bishop(WHITE);
  activePieces[4] = Knight(WHITE);
  activePieces[5] = Knight(WHITE);
  activePieces[6] = Rook(WHITE);
  activePieces[7] = Rook(WHITE);
  for (int i = 0; i < NUM_PAWNS; i++){
    activePieces[8 + i] = Pawn(WHITE);
  }
  //black
  activePieces[TEAM_PIECES + 0] = King(BLACK);
  activePieces[TEAM_PIECES + 1] = Queen(BLACK);
  activePieces[TEAM_PIECES + 2] = Bishop(BLACK);
  activePieces[TEAM_PIECES + 3] = Bishop(BLACK);
  activePieces[TEAM_PIECES + 4] = Knight(BLACK);
  activePieces[TEAM_PIECES + 5] = Knight(BLACK);
  activePieces[TEAM_PIECES + 6] = Rook(BLACK);
  activePieces[TEAM_PIECES + 7] = Rook(BLACK);
  for (int i = 0; i < NUM_PAWNS; i++){
    activePieces[TEAM_PIECES + 8 + i] = Pawn(BLACK);
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
  char displayArray[DISPLAY_WIDTH][DISPLAY_HEIGHT];
  for (int i = 0; i < DISPLAY_WIDTH; i++){
    for (int j = 0; j < DISPLAY_HEIGHT; j++){
      if (i == (DISPLAY_WIDTH - 1)){
	displayArray[i][j] = '/n';
      } else if (j % 2 == 0){
	displayArray[i][j] = '-';
      } else if (i % == 0){
	displayArray[i][j] = '|';
      } else {
	if (board[i/2][j/2] == NULL){
	  displayArray[i][j] = ' '; 
	} else {
	  displayArray[i][j] = board[i/2][j/2].display();
	}
      }
      cout<< displayArray[i][j];
    }
  }
}

void Board::move(Piece piece, Location location)
{

}
