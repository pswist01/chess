#include <iostream>
using namespace std;

struct location {
  int rank;
  char file;
}

class Piece {
 public:
  void taken();
  location getLocation();
  string getColor();

 private:
  bool active;
  string color;
  int importance;


}
