//Piece.cpp
#include "piece.h"

Piece::Piece() : location(0, 0)
{
  active = true;
  color = EMPTY;
  importance = 0;
}

Piece::Piece(const string &_color, const Location &_location) :
  location(_location)
{
  active = true;
  color = _color;
  importance = 0;
}

void Piece::taken()
{
}

string Piece::getColor()
{
  return color;
}

Location Piece::getLocation()
{
  return location;
}

string Piece::display()
{
  return "  ";
}

bool Piece::validMove(const Location &_location)
{
  return false;
}
