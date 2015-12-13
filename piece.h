#ifndef piece_h
#define piece_h

#include <iostream>
using namespace std;

const string WHITE = "W";
const string BLACK = "B";
const string EMPTY = " ";

class Location {
 public:
  Location(int x, int y) { file = x; rank = y; }

  int file;
  int rank;
};

class Piece {
 public:
  Piece();
  Piece(const string &_color, const Location &_location);

  void taken();
  string getColor();
  Location getLocation();

  // subclass must define these
  virtual string display();
  virtual bool validMove(const Location &_location);

 protected:
  bool active;
  string color;
  int importance;
  Location location; // Each piece knows its location

};

#endif
