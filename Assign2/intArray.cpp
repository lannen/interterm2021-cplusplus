/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 2 - int array
*/

#include <iostream>
using namespace std;

int main () {
  int numberArray[10];  // initialize array with size 10
  int number;   // number to check

  for (int i=0; i<10; ++i) {  // loop through array
    cout << "Enter a non negative number: " << endl;  // user prompt
    cin >> number;

    if (number >=0) {   // number is non negative
      numberArray[i] = number;    // add number to array
    }

    else {    // number is negatibe
      cout << "Invalid number. Enter a non negative number: " << endl;    // error prompt
      cin >> number;

      if (number >= 0) {  // number is non negative
        numberArray[i] = number;    // add number to array
      }
    }
  }

  for (int i=0; i<10; ++i) {  // loop to print array
    cout << numberArray[i] << " ";
  }

  cout << endl;

  return 0;
}
