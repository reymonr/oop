#include <iostream>
#include <conio.h>

#define ESCAPE 27
#define RETURN 13

using namespace std;
 
class TollBooth {
  private:
    int numberOfCars;
    double totalAmount;
    int paidCars;
    int freeCars;
  public:
    TollBooth();
    void payingCar();
    void noPayCar();
    void display();
};

TollBooth::TollBooth() {
  numberOfCars = 0;
  totalAmount = 0;
  paidCars = 0;
  freeCars = 0;
}

void TollBooth::payingCar() {
  numberOfCars++;
  paidCars++;
  totalAmount = totalAmount + 0.50;
}

void TollBooth::noPayCar() {
  numberOfCars++;
  freeCars++;
}

void TollBooth::display() {
  cout << endl;
  cout << "Total paid cars: " << paidCars;
  cout << endl;
  cout << "Total free cars: " << freeCars;
  cout << endl;
  cout << "Total cars: " << numberOfCars;
  cout << endl;
  cout << "Total amount: " << totalAmount;
  cout << endl;
}

bool escapeToQuit() {
  while(true) {
    char key;

    key = getch();

    if(key == ESCAPE) {
      return false;
    } else if(key == RETURN) {
      return true;
    }
  }
}

int main()
{
  TollBooth toll;
  char key;

  cout << "Input Data for Cars" << endl;
  cout << "-------------------" << endl;
  cout << "Press 'p' for paying car" << endl;
  cout << "Press 'f' for free car" << endl;
  cout << "Press ESC or 'q' to quit" << endl;
  cout << endl;

  do {
    cout << "Press a key: "; 
    cin >> key;

    if(key == 'p') {
      toll.payingCar();
    } else if(key == 'f') {
      toll.noPayCar();
    } else if(key == 'q') {
      break;
    } else {
      if(key == 'Q') {
        break;
      }

      cout << "Invalid key.. try again!" << endl;
    }

  } while(escapeToQuit());

  toll.display();

  return 0;
}
