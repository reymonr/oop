#include <iostream>

using namespace std;

class Test {
  private:
    int grade;
  
  public:
    // constructor
    Test() {
      grade = 100;
    }

    Test(int value) {
      grade = value;
    }
    
    void setGrade(int value) {
      grade = value;
    };

    void getGrade() {
      cout << "Your grade: " << grade << endl;
    };
};

int main()
{
  // Create an object (instance of class)
  Test student1(0);
  Test student2;
  Test student3(65);

  // Accessing object's methods
  student1.setGrade(87);
  student1.getGrade();

  student2.getGrade();

  student3.getGrade();

  return 0;
}
