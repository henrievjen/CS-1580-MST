// Programmer:       Henri Evjen
// MST Username:     hoe4ng
// Instructor Name:  Saiteja Konda
// Section:          A
// Date:             10/8/19
// File:             lab8.cpp
// Purpose: The user will input an integer value, a float value, and a double
// value representing the radius of a circle. The program will output the area.

#include <iostream>
#include "helper.h"
using namespace std;

int main() {
  // Declarations
  int i_rad;
  float f_rad;
  double d_rad, area;

  greet();

  // Int Input
  cout << "Input an integer radius: ";
  cin >> i_rad;
  area = computeArea(i_rad);
  printArea(area);

  // Float Input
  cout << "Input a float radius: ";
  cin >> f_rad;
  area = computeArea(f_rad);
  printArea(area);

  // Double Input
  cout << "Input a double radius: ";
  cin >> d_rad;
  area = computeArea(d_rad);
  printArea(area);

  signout();

  return 0;
}
