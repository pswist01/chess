#include "rook.h"

Rook::Rook() : Piece()
{
}

Rook::Rook(const string &_color, const Location &_location)
  : Piece(_color, _location)
{
}

Rook::~Rook()
{
}

bool Rook::validMove(const Location &_location)
{
  return false;
}

string Rook::display()
{
  return color+"R";
}
