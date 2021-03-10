#include <iostream>

using namespace std;

class Time {
  private:
    int hours;
    int minutes;
    int seconds;
  public:
    Time();
    Time(int, int, int);
    void display();
    void add(Time, Time);
};

Time::Time() {
  hours = 0;
  minutes = 0;
  seconds = 0;
}

Time::Time(int hours, int minutes, int seconds) {
  this->hours = hours;
  this->minutes = minutes;
  this->seconds = seconds;
}

void Time::display() {
  if(seconds == 0) {
    cout << hours << ":" << minutes << ":0" << seconds;
  } else if(seconds <= 9) {
    cout << hours << ":0" << minutes << ":0" << seconds;
  } else {
    cout << hours << ":" << minutes << ":" << seconds;
  }
}

void Time::add(Time t1, Time t2) {
  seconds = t1.seconds + t2.seconds;
  if(seconds > 59) {
    seconds = seconds - 60;
    minutes = minutes + 1;
  }

  minutes = minutes + (t1.minutes + t2.minutes);
  if(minutes > 59) {
    minutes = minutes - 60;
    hours = hours + 1;
  }

  hours = hours + (t1.hours + t2.hours);
}

int main()
{
  Time t1(6, 15, 01);
  Time t2(1, 50, 03);
  
  cout << "Time 1: "; t1.display(); cout << endl;
  cout << "Time 2: "; t2.display(); cout << endl << endl;

  Time t3;
  t3.add(t1, t2);
  cout << "Time 3: "; t3.display(); cout << endl;

  return 0;
}
