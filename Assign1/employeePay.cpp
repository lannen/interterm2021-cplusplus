/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 1 - employee pay
*/

#include <iostream>
using namespace std;

int main () {
  double regHours;    // regular hours worked (<40)
  double wage = 16.0;
  double otHours;
  double otWage = 16.0 * 1.5;
  double grossPay;

  cout << "Enter hours worked: ";
  cin >> regHours;

  if (regHours >= 40) {
    otHours = regHours - 40;
    grossPay = (regHours * wage) + (otHours * otWage);
  }

  else {
    grossPay = regHours * wage;
  }

  double ssTax = grossPay * (0.06);
  double fedTax = grossPay * (0.14);
  double stateTax = grossPay * (0.05);
  double medTax = 10.0;

  double netPay = grossPay - ssTax - fedTax - stateTax - medTax;

  cout << "   Gross pay: $" << grossPay << endl;
  cout << "   Withholding amounts: $" << ssTax << " (social security),"
    << " $" << fedTax << " (federal income)," << endl << "    $" << stateTax <<
    " (state income)," << " $" << medTax << " (medical insurance)" << endl;
  cout << "   Net take-home pay: $" << netPay << endl;
}
