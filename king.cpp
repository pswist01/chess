#include "king.h"

King::King() : Piece()
{
  hasMoved = false;
}

King::King(const string &_color, const Location &_location)
  : Piece(_color, _location)
{
  hasMoved = false;
}

King::~King()
{
}

bool King::validMove(const Location &to)
{
  bool valid = false;
  if (location.rank != to.rank)
    {
      int diff = (location.rank > to.rank) ?
	(location.rank - to.rank) : (to.rank - location.rank);
      if (diff != 1)
	{
	  return false;
	}

      valid = true;
    }
  if (location.file != to.file)
    {
      int diff = (location.file > to.file) ?
	(location.file - to.file) : (to.file - location.file);
      if (diff == 1)
	{
	  valid = true;
	}
      else if (diff > 2)
	{
	  return false;
	}
      else
	{
	  // Castling
	  if (hasMoved || (location.rank != to.rank))
	    {
	      return false;
	    }
	  valid = true;
	}
    }

  return valid;
}

string King::display()
{
  return color + "K";
}
