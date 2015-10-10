#ifndef piece_h
#define piece_h

#include <iostream>
using namespace std;

const string WHITE = "W";
const string BLACK = "B";
const string EMPTY = " ";

struct Location {
  int rank;
  char file;
};

class Piece {
 public:
  Piece() { color = EMPTY; }
  Piece(string _color) { color = _color; }

  void taken();
  Location getLocation();
  string getColor();

  // subclass must define these
  virtual string display() { return "  "; }
  virtual bool validMove(Location location) { return false; }

 protected:
  bool active;
  string color;
  int importance;


};

#endif
