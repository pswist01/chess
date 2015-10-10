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


Board::Board()
{
  for (int i = 0; i < BOARD_WIDTH; i++)
  {
    for (int j = 0; j < BOARD_HEIGHT; j++)
    {
      board[i][j] = NULL;
    }
  }

  whitesTurn = true;
  players = 2;
}

Board::~Board()
{
  for (int i = 0; i < BOARD_WIDTH; i++)
  {
    for (int j = 0; j < BOARD_HEIGHT; j++)
    {
      if (board[i][j] != NULL)
	delete board[i][j];
    }
  }
}

void Board::reset()
{
  //setup white
  board[0][0] = new Rook(WHITE);
  board[1][0] = new Knight(WHITE);
  board[2][0] = new Bishop(WHITE);
  board[3][0] = new Queen(WHITE);
  board[4][0] = new King(WHITE);
  board[5][0] = new Bishop(WHITE);
  board[6][0] = new Knight(WHITE);
  board[7][0] = new Rook(WHITE);
  for (int i = 0; i < NUM_PAWNS; i++) {//P
    board[i][1] = new Pawn(WHITE);
  }
  //setup black
  board[0][7] = new Rook(BLACK);
  board[1][7] = new Knight(BLACK);
  board[2][7] = new Bishop(BLACK);
  board[3][7] = new Queen(BLACK);
  board[4][7] = new King(BLACK);
  board[5][7] = new Bishop(BLACK);
  board[6][7] = new Knight(BLACK);
  board[7][7] = new Rook(BLACK);
  for (int i = 0; i < NUM_PAWNS; i++) {//P
    board[i][6] = new Pawn(BLACK);
  }
  

  whitesTurn = true;
}

void Board::display()
{
  int i;
  int j;

  cout << '-';
  for (i = 0; i < BOARD_WIDTH; i++)
    {
      cout << "---";
    }
  cout << endl;

  for (j = BOARD_HEIGHT - 1; j >= 0; j--)
    {
      cout << '|';
      for (i = 0; i < BOARD_WIDTH; i++)
	{
	  if (board[i][j] != NULL)
	    cout << board[i][j]->display();
	  else
	    cout << "  ";
	  cout << '|';
	}
      cout << endl;

      cout << '-';
      for (i = 0; i < BOARD_WIDTH; i++)
	cout << "---";
      cout << endl;
    }
}

void Board::move(Piece piece, Location location)
{

}
