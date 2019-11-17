#include <iostream>
#include "lab9.h"
using namespace std;

void greet()
{
  cout << "Welcome to the BMI calculator program" << endl << endl;

  return;
}

void inputHeightAndWeight(float height[], float weight[], const int SIZE)
{
  cout <<"Enter the heights and weights of 5 people to find their BMI"<<endl;  

  for(int i = 0; i < SIZE; i++)
  {
    cout << "Person " << i + 1 << " height(in inches): ";
    cin >> height[i];

    cout << "Person " << i + 1 << " weight(in lbs): ";
    cin >> weight[i];
    cout << endl;
  }
  cout << endl; 

  return;
}

void calculateBmi(const float HEIGHT[], const float WEIGHT[], const int SIZE,
 float bmi[])
{
  // Declarations
  const int BMI_CONSTANT = 703;

  for(int i = 0; i < SIZE; i++)
  {
    bmi[i] = (BMI_CONSTANT * (WEIGHT[i]/(HEIGHT[i] * HEIGHT[i])));
  }

  return;
}

void outputBmi(const float BMI[], const int SIZE)
{
  for(int i = 0; i < SIZE; i++)
  {
    cout << "BMI of person " << i + 1 << " is " << BMI[i] << endl;
  }

  return;
}
