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
  board[0][0] = new Rook(WHITE, Location(0, 0));
  board[1][0] = new Knight(WHITE, Location(1, 0));
  board[2][0] = new Bishop(WHITE, Location(2, 0));
  board[3][0] = new Queen(WHITE, Location(3, 0));
  board[4][0] = new King(WHITE, Location(4, 0));
  board[5][0] = new Bishop(WHITE, Location(5, 0));
  board[6][0] = new Knight(WHITE, Location(6, 0));
  board[7][0] = new Rook(WHITE, Location(7, 0));
  for (int i = 0; i < NUM_PAWNS; i++) {//P
    board[i][1] = new Pawn(WHITE, Location(i, 1));
  }
  //setup black
  board[0][7] = new Rook(BLACK, Location(0, 7));
  board[1][7] = new Knight(BLACK, Location(1, 7));
  board[2][7] = new Bishop(BLACK, Location(2, 7));
  board[3][7] = new Queen(BLACK, Location(3, 7));
  board[4][7] = new King(BLACK, Location(4, 7));
  board[5][7] = new Bishop(BLACK, Location(5, 7));
  board[6][7] = new Knight(BLACK, Location(6, 7));
  board[7][7] = new Rook(BLACK, Location(7, 7));
  for (int i = 0; i < NUM_PAWNS; i++) {//P
    board[i][6] = new Pawn(BLACK, Location(i, 6));
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
	    {
	    cout << board[i][j]->display();
	    }
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
