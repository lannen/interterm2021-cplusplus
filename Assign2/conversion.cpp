/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 2 - conversion
*/

#include <iostream>
#include <cmath>
using namespace std;

void userOutput(double meters, double centimeters) {  // outputs length in m and cm
  cout << "Length in meters -  " << meters << " m" << endl;   // length in m
  cout << "Length in centimeters - " << centimeters << " cm" << endl; // length in cm
}

void Calculate(double feet,double inches) {   // converts feet and inches to meters and cm
  double meters = (feet*0.3048) + (inches*0.0254);  //calculates meters
  double remainder = floor(meters);   // REMAINDER!!!

  double centimeters = (meters - remainder) *100;   // calculates centimeters
  userOutput(meters, centimeters);    // outputs meters and cm
}

void userInput() {    // takes user input of feet and inches
  double feet;
  double inches;

  cout << "Enter length (in feet): ";
  cin >> feet;
  cout << "Enter length (in inches): ";
  cin >> inches;

  Calculate(feet, inches);    // calls Calculate()
}

int main() {
  string response;   // user response ('quit' or other)

  while (true) {
    cout << "Type 'exit' to quit: ";
    cin >> response;

    if (response == "exit") { // user quits program
      break;
    }
    else {    // user doesn't quit program
      userInput();
    }
  }
  return 0;
}
