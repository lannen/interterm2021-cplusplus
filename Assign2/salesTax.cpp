/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 2 - sales tax
*/

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) { // calculates cost with tax
  float finalCost;  // final cost

  finalCost = ((taxRate/100) * cost) + cost;    // cost with tax

  return finalCost;
}

int main(int argc, char **argv) {
  // i know it has to be command line parameter
  float taxRate = 7.75;
  float cost = 23.45;

  float result = addTax(taxRate, cost);
  cout << result << endl;

  return 0;
}
