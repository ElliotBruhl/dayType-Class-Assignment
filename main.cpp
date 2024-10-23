#include <iostream>
#include "dayType.hpp"
using namespace std;

int main() {
  dayType day1 = dayType();
  cout << "dayType with default constructor: " << day1.getDay() << endl;

  dayType day2 = dayType("Monday");
  cout << "dayType with 1 arg (as Monday) constructor: " << day2.getDay() << endl;

  cout << "Current day: " << day2.getDay() << endl;
  cout << "Next day: " << day2.getNextDay() << endl;
  cout << "Previous day: " << day2.getPrevDay() << endl;

  day2.setDay("Monday");
  cout << "Day set to \"Monday\". "<< endl;
  cout << "4 Days in the future: " << day2.getNextDays(4) << endl;

  day2.setDay("Tuesday");
  cout << "Day set to \"Tuesday\". "<< endl;
  cout << "13 days in the future: " << day2.getNextDays(13) << endl;

  return 0;  
}