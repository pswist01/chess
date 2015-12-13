#include "queen.h"

Queen::Queen() : Piece()
{
}

Queen::Queen(const string &_color, const Location &_location)
  : Piece(_color, _location)
{
}

Queen::~Queen()
{
}

bool Queen::validMove(const Location &_location)
{
  return false;
}

string Queen::display()
{
  return color+"Q";
}
