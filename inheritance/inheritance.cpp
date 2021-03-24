#include <iostream>
 
using namespace std;

class GrandParents {
  private:
    int nilai;
  
  public:
    void setNilai(int x) {
      nilai = x;
    }

    int getNilai() {
      return nilai;
    }
};

class Parents : public GrandParents {
  private:
    int data;
  
  public:
    void setData(int d) {
      data = d;
    }

    int getData() {
      return data;
    }
};

class Child : public Parents {
  private:
    int umur;
  
  public:
    void setUmur(int u) {
      umur = u;
    }

    int getUmur() {
      return umur;
    }
};

int main()
{
  Child ch;
  ch.setUmur(17);
  cout << "Umur : " << ch.getUmur();
  cout << endl;

  ch.setData(35);
  cout << "Data : " << ch.getData();
  cout << endl;

  ch.setNilai(35);
  cout << "Nilai : " << ch.getNilai();
  cout << endl;

  return 0;
}
