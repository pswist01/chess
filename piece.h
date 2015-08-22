#ifndef piece_h
#define piece_h


struct Location {
  int rank;
  char file;
}

class Piece {
 public:
  void taken();
  Location getLocation();
  string getColor();

 private:
  bool active;
  string color;
  int importance;


}

#endif
