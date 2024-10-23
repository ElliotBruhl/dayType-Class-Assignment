#include "dayType.hpp"
#include <iostream>
using namespace std;

const string dayType::days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int dayType::dayToInt(string d) {
  for (int i = 0; i < 7; i++) {
    if (d == dayType::days[i])
      return i;
  }
  cout << "Invalid day. Day set to \"Sunday\"" << endl;
  return 0;
}

dayType::dayType() {
  day = 0;
}
dayType::dayType(string d) {
  day = dayToInt(d);
}
void dayType::setDay(string d) {
  day = dayToInt(d);
}
void dayType::displayDay() {
  cout << days[day] << endl;
}
string dayType::getDay() {
  return days[day];
}
string dayType::getNextDay() {
  return days[(day + 1) % 7];
}
string dayType::getPrevDay() {
  return days[(day - 1 + 7) % 7];
}
string dayType::getNextDays(int n) {
  if (n <= 0) {
    return "Invalid number of days. Day not changed.";
  }
  return days[(day + n) % 7];
}