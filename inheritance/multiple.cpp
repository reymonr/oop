#include <iostream>

using namespace std;

class Induk1 {
  private:
    int x;
  public:
    void setX(int newX) {
      x = newX;
    }

    int getX() {
      return x;
    }
};

class Induk2 {
  private:
    int y;
  public:
    void setY(int newY) {
      y = newY;
    }

    int getY() {
      return y;
    }
};

class Turunan : public Induk1, public Induk2 {
  private:
    int z;
  public:
    void setZ(int newZ) {
      z = newZ;
    }

    int getZ() {
      return z;
    }
};

int main()
{
  Turunan tn;

  tn.setX(20);
  cout << "Nilai x dari parent Induk1: " << tn.getX();
  cout << endl;

  tn.setY(60);
  cout << "Nilai y dari parent Induk2: " << tn.getY();
  cout << endl;

  tn.setZ(100);
  cout << "Nilai z dari child Turunan: " << tn.getZ();
  cout << endl;
  
  return 0;
}
