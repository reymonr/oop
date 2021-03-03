#include <iostream>

using namespace std;

class Contoh {
  private:
    int x;
  
  public:
    void setX(int x) {
      this->x = x;
    }

    int getX() {
      return this->x;
    }
};

int square(Contoh C, int n) {
  C.setX(n);
  return (C.getX() * C.getX());
}

Contoh myFunction() {
  Contoh M;
  M.setX(25);

  return M;
}

int main()
{
  Contoh c2;
  cout << "Square value of: " << square(c2, 7) << endl << endl;

  Contoh c3;
  c3 = myFunction(); // M.setX(25)
  cout << "Value of X: " << c3.getX(); // output: 25
  
  return 0;
}
