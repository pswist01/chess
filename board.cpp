#include <iostream>
using namespace std;

const int boardHeight = 8;
const int boardLength = 8;
const int piecesOnBoard = 32;

Board::Board()
{
  activePieces[] = new Piece[piecesOnBoard];
  takenPieces[] = new Piece[piecesOnBoard];
  whitesTurn = true;
  players = 2;
  tempArray[boardLength][boardHeight];
  board = tempArray;
}

Board::~Board()
{

}
