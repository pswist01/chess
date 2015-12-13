#include "bishop.h"

Bishop::Bishop() : Piece()
{
}

Bishop::Bishop(const string &_color, const Location &_location)
  : Piece(_color, _location)
{
}

Bishop::~Bishop()
{
}

bool Bishop::validMove(const Location &_location)
{
  return false;
}

string Bishop::display()
{
  return color+"B";
}
