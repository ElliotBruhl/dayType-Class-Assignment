//header file
#include <string>
using namespace std;

class dayType {
private:
  int day;
  const static string days[7];
  int dayToInt(string d);
public:
  dayType();//pre: none. post: there is a new dayType object
  dayType(string d); //pre: "string" is a valid day. post: there is a new dayType object with "string" as the day
  void setDay(string d); //pre: "string" is a valid day. post: "string" is now the day
  void displayDay(); //pre: none. post: none
  string getDay(); //pre: none. post: current day is returned
  string getNextDay(); //pre: none. post: next day is returned
  string getPrevDay(); //pre: none. post: previous day is returned
  string getNextDays(int n); //pre: "int" is a positive number. post: the day "int" days in the future is returned
};