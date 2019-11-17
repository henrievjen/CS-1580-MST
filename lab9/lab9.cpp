// Programmer:       Henri Evjen
// MST Username:     hoe4ng
// Instructor Name:  Saiteja Konda
// Section:          A
// Date:             10/15/19
// File:             lab9.cpp
// Purpose: the program will prompt the user to input the BMI of 5 people and
// will calculate their BMIs and output them to the screen


#include <iostream>
#include "lab9.h"
using namespace std;

int main()
{
  // Declarations
  const int AMOUNT_PEOPLE = 5;
  float height[AMOUNT_PEOPLE];
  float weight[AMOUNT_PEOPLE];
  float bmi[AMOUNT_PEOPLE];

  greet();
  inputHeightAndWeight(height, weight, AMOUNT_PEOPLE);
  calculateBmi(height, weight, AMOUNT_PEOPLE, bmi);
  outputBmi(bmi, AMOUNT_PEOPLE);

  return 0;
}
