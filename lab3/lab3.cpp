// Henri Evjen
// hoe4ng
// Section A
// Saiteja Konda

#include <iostream>
using namespace std;

int main() {
  // Declarations
  int weight, height;
  const int CONVERSION_FACTOR = 703;
  double naive_bmi, bmi_index;

  cout << "Welcome to the BMI Calculator Program" << endl << endl;

  //  Prompt User for input
  cout << "Please enter your weight (lbs): ";
  cin >> weight;
  cout << "Please enter your height (inches): ";
  cin >> height;

  // Calculations
  naive_bmi = static_cast<double>(weight) / height;
  bmi_index = (static_cast<double>(weight)*CONVERSION_FACTOR)/(height*height);

  // Output Results
  cout << endl << endl << "-----Results-----" << endl;
  cout << "The naive BMI index is: " << naive_bmi << endl;
  cout << "The official BMI index is: " << bmi_index << endl;
  cout << "The official BMI index after round-up is: " << 
  static_cast<int>(bmi_index) << endl;

  cout << "Goodbye!" << endl;

  return 0;
}
