/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 1 - fire capacity
*/

#include <iostream>
using namespace std;

int main () {
  int maxCapacity;  // max capacity of room
  int numPeople;    // number of people in the room
  int addPeople;    // additional people
  int excPeople;    // excluded people

  cout << "Max capacity of room: ";   // prompts max capacity of room
  cin >> maxCapacity;   // input max capacity

  cout << "Number of people: ";   // prompts number of people attending
  cin >> numPeople;   // input number of people

  if (numPeople <= maxCapacity) {   // if the number of people is less than/equal to the max capacity
    addPeople = maxCapacity - numPeople;  // calculates the amount of additional people that can attend

    if (addPeople == 1) {
      cout << "   Legal to hold meeting. " << addPeople << " more person can attend." << endl;
    }
    else { // outputs the number of additional people that can attend
      cout <<  "   Legal to hold meeting. " << addPeople << " more people can attend." << endl;
    }
  }

  else if (numPeople >= maxCapacity) {    // if the number of people is greater than/equal to the max capacity
    excPeople = numPeople - maxCapacity;    // calculates the amount of people that need to be excluded

    if (excPeople == 1) {
      cout << "   Not legal to hold meeting. " << excPeople << " person must leave due to fire regulations." << endl;
    }
    else {  // outputs the number of people that must be excluded
      cout << "   Not legal to hold meeting. " << excPeople << " people must leave due to fire regulations." << endl;
    }
  }

  return 0;
}
