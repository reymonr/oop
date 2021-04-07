#include <iostream>

using namespace std;

class Person {
  private:
    string name;
    char gender;
  public:
    Person() { /* constructor */ }
    void setName(string name) { this->name = name; }
    void setGender(char gender) { this->gender = gender; }
    string getName() { return name; }
    char getGender() { return gender; }
};

class Teacher : public Person {
  private:
    int nik;
    string faculty;
  public:
    void setNik(int nik) { this->nik = nik; }
    void setFaculty(string faculty) { this->faculty = faculty; }
    int getNik() { return nik; }
    string getFaculty() { return faculty; }

    void setData() {
      // initialize variable to holds input data
      string teacherName;
      string teacherFaculty;
      char teacherGender;
      int teacherNik;

      cout << endl;
      cout << "--------------------" << endl;
      cout << "Input Teacher's Data" << endl;
      cout << "--------------------" << endl;
      cout << "Full Name\t: "; getline(cin, teacherName);
      cout << "Faculty\t\t: "; getline(cin, teacherFaculty);
      cout << "Gender\t\t: "; cin >> teacherGender;
      cout << "NIK\t\t: "; cin >> teacherNik;

      setName(teacherName); // parent's function
      setGender(teacherGender); // parent's function
      setFaculty(teacherFaculty);
      setNik(teacherNik);
    }

    void displayData() {
      cout << endl;
      cout << "--------------" << endl;
      cout << "Teacher's Data" << endl;
      cout << "--------------" << endl;
      cout << "Full Name\t: " << getName() << endl;
      cout << "Gender\t\t: " << getGender() << endl;
      cout << "NIK\t\t: " << getNik() << endl;
      cout << "Faculty\t\t: " << getFaculty() << endl;
    }
};

class Student : public Person {
  private:
    int nim;
    string registrationNumber;
    string prodi;
  public:
    void setNim(int nim) { this->nim = nim; }
    void setRegistrationNumber(string registrationNumber) {
      this->registrationNumber = registrationNumber;
    }
    void setProdi(string prodi) { this-> prodi = prodi; }
    int getNim() { return nim; }
    string getRegistrationNumber() { return registrationNumber; }
    string getProdi() { return prodi; }
};

int main()
{
  Teacher tc, tc2;
  tc.setName("John Doe");
  tc.setGender('M');
  tc.setNik(12345);
  tc.setFaculty("Fakultas Ilmu Komputer");

  cout << endl;
  cout << "--------------" << endl;
  cout << "Teacher's Data" << endl;
  cout << "--------------" << endl;
  cout << "Full Name\t: " << tc.getName() << endl;
  cout << "Gender\t\t: " << tc.getGender() << endl;
  cout << "NIK\t\t: " << tc.getNik() << endl;
  cout << "Faculty\t\t: " << tc.getFaculty() << endl;

  tc2.setData();
  tc2.displayData();

  Student st, st2;
  st.setName("Marry Weather");
  st.setGender('F');
  st.setNim(10501001);
  st.setRegistrationNumber("S10501001");
  st.setProdi("Akuntansi");

  cout << endl << endl;
  cout << "--------------" << endl;
  cout << "Student's Data" << endl;
  cout << "--------------" << endl;
  cout << "Full Name\t: " << st.getName() << endl;
  cout << "Gender\t\t: " << st.getGender() << endl;
  cout << "NIM\t\t: " << st.getNim() << endl;
  cout << "Reg. Number\t: " << st.getRegistrationNumber() << endl;
  cout << "Prodi\t\t: " << st.getProdi() << endl;

  // hold buffer
  
  string studentName, studentProdi, studentRegNumber;
  int studentNim;
  char studentGender;

  cout << endl << endl;
  cout << "--------------------" << endl;
  cout << "Input Student's Data" << endl;
  cout << "--------------------" << endl;
  cout << "Full Name\t: "; getline(cin, studentName);
  cout << "Prodi\t\t: "; getline(cin, studentProdi);
  cout << "Reg. Number\t: "; getline(cin, studentRegNumber);
  cout << "NIM\t\t: "; cin >> studentNim;
  cout << "Gender\t\t: "; cin >> studentGender;

  st2.setName(studentName);
  st2.setProdi(studentProdi);
  st2.setRegistrationNumber(studentRegNumber);
  st2.setNim(studentNim);
  st2.setGender(studentGender);

  cout << endl << endl;
  cout << "--------------" << endl;
  cout << "Student's Data" << endl;
  cout << "--------------" << endl;
  cout << "Full Name\t: " << st2.getName() << endl;
  cout << "Gender\t\t: " << st2.getGender() << endl;
  cout << "NIM\t\t: " << st2.getNim() << endl;
  cout << "Reg. Number\t: " << st2.getRegistrationNumber() << endl;
  cout << "Prodi\t\t: " << st2.getProdi() << endl;
  
  return 0;
}
