#include <iostream>

using namespace std;

class Student {
  private:
    float gpa;

  public:
    void setGPA(float gpa) {
      this->gpa = gpa;
    }

    float getGPA() {
      return this->gpa;
    }
};

int main()
{
  Student S;

  S.setGPA(3.80);
  cout << "Your GPA: " << S.getGPA();

  return 0;
}
