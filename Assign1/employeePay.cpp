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
  double wage = 16.0; // regular wage $16
  double otHours;   // overtime hours worked (>=40)
  double otWage = 16.0 * 1.5;  // overtime wage $16*1.5
  double grossPay;    // pay without taxes

  // user enters hours worked
  cout << "Enter hours worked: ";
  cin >> regHours;

  if (regHours >= 40) {   //check overtime hours
    otHours = regHours - 40;    // overtime hours
    grossPay = (regHours * wage) + (otHours * otWage);  // updates overtime wage
  }

  else {  // no overtime hours
    grossPay = regHours * wage;
  }

  double ssTax = grossPay * (0.06);   // 6% social security tax
  double fedTax = grossPay * (0.14);  // 14% federal taxe
  double stateTax = grossPay * (0.05);  // 5% state tax
  double medTax = 10.0;   // $10 medical insurance tax

  double netPay = grossPay - ssTax - fedTax - stateTax - medTax;    // calculate net pay (gross pay - taxes)

  // print out gross pay, taxes, and net take-home pay
  cout << "   Gross pay: $" << grossPay << endl;
  cout << "   Withholding amounts: $" << ssTax << " (social security),"
    << " $" << fedTax << " (federal income)," << endl << "    $" << stateTax <<
    " (state income)," << " $" << medTax << " (medical insurance)" << endl;
  cout << "   Net take-home pay: $" << netPay << endl;

  return 0;
}
