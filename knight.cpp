#include "knight.h"

Knight::Knight() : Piece()
{
}

Knight::Knight(const string &_color, const Location &_location)
  : Piece(_color, _location)
{
}

Knight::~Knight()
{
}

bool Knight::validMove(const Location &_location)
{
  return false;
}

string Knight::display()
{
  return color+"N";
}
