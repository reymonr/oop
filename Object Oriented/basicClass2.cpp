#include <iostream>

using namespace std;

class Test {
  private:
    int grade;
  
  public:
    Test();
    Test(int value);
    void setGrade(int value);
    void getGrade();
};

Test::Test() {
  grade = 100;
}

Test::Test(int value) {
  grade = value;
}

void Test::setGrade(int value) {
  grade = value;
}

void Test::getGrade() {
  cout << "Your grade: " << grade << endl;
}

int main()
{
  // Create an object (instance of class)
  Test student1;
  Test student2;
  Test student3(48);

  // Accessing object's methods
  student1.setGrade(87);
  student1.getGrade();

  student2.getGrade();

  student3.getGrade();

  return 0;
}
