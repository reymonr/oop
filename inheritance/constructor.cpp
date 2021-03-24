#include <iostream>

using namespace std;

class Induk1 {
  private:
    int x;
  public:
    Induk1(int newX) {
      x = newX;
      cout << "Constructor Induk1" << endl;
    }

    int getX() {
      return x;
    }
};

class Induk2 {
  private:
    int y;
  public:
    Induk2(int newY) {
      y = newY;
      cout << "Constructor Induk2" << endl;
    }

    int getY() {
      return y;
    }
};

class Turunan : public Induk1, public Induk2 {
  private:
    int z;
  public:
    Turunan(int myX, int myY, int newZ) : 
    Induk2(myX), Induk1(myY) {
      z = newZ;
      cout << "Constructor Turunan" << endl;
    }

    int getZ() {
      return z;
    }
};

int main()
{
  Turunan tr(10, 20, 30);

  cout << "Nilai x: " << tr.getX() << endl;
  cout << "Nilai y: " << tr.getY() << endl;
  cout << "Nilai z: " << tr.getZ() << endl;

  return 0;
}
