/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 2 - sales tax
*/

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost) {
  float costValue;

  costValue = ((taxRate/100) * cost) + cost;

  return costValue;
}

int main() {
  return 0;
}
