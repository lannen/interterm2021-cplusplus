/*
Full Name: Lily Annen
Student ID: 2344156
Chapman email: annen@chapman.edu
Course number and section: 298-01
Assignment 1 - cereal
*/

#include <iostream>
using namespace std;

int main () {
  int boxesNeeded;    // boxes needed for 1 metric ton
  double weightInOunces;    // weight of cereral box in oz
  double weightInMetricTons;  // weight of cereal box in metric tons
  double ouncesPerBox = 21; // one box of cereal is 21 oz
  double ouncesPerTon = 35273.92;  // 35274 oz is 1 metric ton

  cout << "Enter cereal weight in ounces: ";  // user prompt to insert cereal weight
  cin >> weightInOunces;  // input weight

  weightInMetricTons = weightInOunces / ouncesPerTon;   // calculates weight from oz to tons

  boxesNeeded = ouncesPerTon / ouncesPerBox;  // calculates boxes needed to yield one metric ton of cereal

  // outputs weight converted to metric tons
  cout << "   " << weightInOunces << " ounces is " << weightInMetricTons << " metric tons." << endl;
  cout << "   " << boxesNeeded << " boxes of cereal needed for 1 metric ton of cereal." << endl;

  return 0;
}
