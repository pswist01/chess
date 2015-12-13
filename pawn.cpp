#include "pawn.h"

Pawn::Pawn() : Piece()
{
}

Pawn::Pawn(const string &_color, const Location &_location)
  : Piece(_color, _location)
{
}

Pawn::~Pawn()
{
}

bool Pawn::validMove(const Location &_location)
{
  return false;
}

string Pawn::display()
{
  return color+'P';
}
