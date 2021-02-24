/**
  * Functions in C++:
  *   - Fungsi yang TIDAK mengembalikkan nilai
  *     - ada parameter
  *         void namaFungsi(string name) {
  *           body of function
  *         }
  *     - tidak ada parameter
  *         void namaFungsi() {
  *           body of function
  *         }
  *   - Fungsi yang mengembalikkan nilai
  *     - ada parameter
  *         float namaFungsi(float gpa, string prodi) {
  *           body of function
  *           return value;
  *         }
  *     - tidak ada parameter
  *         float namaFungsi() {
  *           body of function
  *           return value;
  *         }
**/

#include <iostream>

using namespace std;

// Function declaration / prototype
void welcomeMessage();
void inputName(string name, char gender, int age);
double averageGrade(int grades[], int length);
int maxGrade(int grades[]);
int minGrade(int grades[]);
string thankYou();


int main()
{
  int grades[] = {90, 85, 91, 55, 79, 88, 73};
  int sizeOfGrades = sizeof(grades) / sizeof(grades[0]);

  welcomeMessage();
  inputName("Reymon Rotikan", 'M', 20);

  cout << "Averages: " << averageGrade(grades, sizeOfGrades) << endl;
  cout << "The Highest: " << maxGrade(grades) << endl;
  cout << "The Lowest: " << minGrade(grades) << endl;

  cout << thankYou();

  return 0;
}

// Fungsi yang TIDAK mengembalikkan nilai dan tidak ada parameter
void welcomeMessage() {
  cout << "===================================" << endl;
  cout << "|| Welcome to Grading System 1.0 ||" << endl;
  cout << "===================================" << endl;
}

// Fungsi yang TIDAK mengembalikkan nilai dan ada parameter
void inputName(string name, char gender, int age) {
  string genderName = gender == 'M' ? "Male" : "Female";

  cout << "Below is your credentials:" << endl;
  cout << "Your name is " << name;
  cout << ", you are a " << genderName;
  cout << " and you are " << age << " years old." << endl;
}

// Fungsi yang mengembalikkan nilai dan ada parameter
double averageGrade(int grades[], int length) {
  double rerata = 0, total = 0;

  for(int i=0; i<length; i++) {
    total += grades[i];
  }
  return rerata = total / length;
}

int maxGrade(int grades[]) {
  int tertinggi = grades[0];

  for(int i=1; i<5; i++) {
    if(grades[i] > tertinggi) {
      tertinggi = grades[i];
    }
  }

  return tertinggi;
}

int minGrade(int grades[]) {
  int terendah = grades[0];

  for(int i=1; i<5; i++) {
    if(grades[i] < terendah) {
      terendah = grades[i];
    }
  }

  return terendah;
}

// Fungsi yang mengembalikkan nilai dan tidak ada parameter
string thankYou() {
  return "\nThank you for using our application";
}
