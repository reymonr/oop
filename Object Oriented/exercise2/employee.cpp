#include <iostream>

using namespace std;

class Employee {
  private:
    int number;
    float compensation;
  public:
    void input();
    void display();
};

void Employee::input() {
  cout << "Employee Number: ";
  cin >> number;
  cout << "Compensation: ";
  cin >> compensation;
}

void Employee::display() {
  cout << "Employee Number: " << number << endl;
  cout << "Compensation: " << compensation << endl;
}

int main()
{
  Employee emp[3];

  for(int i=0; i < 3; i++) {
    emp[i].input();
  }

  cout << endl;
  
  for(int i=0; i < 3; i++) {
    emp[i].display();
  }

  return 0;
}
