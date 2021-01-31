/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 2 - zero both
*/

#include <iostream>
using namespace std;

void zeroBoth(int& int1, int& int2) {   // sets values of reference parameters to 0
  int1 = 0;
  int2 = 0;
}

int main (int argc, char **argv) {
  // i know it has to be command line parameter
  int int1 = 1;
  int int2 = 2;

  zeroBoth(int1, int2);
  cout << int1 << endl;
  cout << int2 << endl;

  return 0;
}
