#include <iostream>
using namespace std;

#ifndef HELPER_H
#define HELPER_H

// Description: outputs a greeting message
// Pre-condition: none
// Post-condition: greeting message is output to screen
void greet();

// Description: outputs a signout message
// Pre-condition: none
// Post-condition: signout message is output to screen
void signout();

// Description: computeArea() calculates and returns the area of a circle
// Pre-condition: RAD must be positive
// Post-condition: returns the radius of a circle
template <typename T>
T computeArea(const T RAD)
{
  // Declarations
  const float PI = 3.14;

  return (PI * RAD * RAD);
}

// Description: outputs the area of a circle
// Pre-condition: none
// Post-condition: the area of the circle is output to the screen
template <typename T>
void printArea(T AREA)
{
  cout << "The area of the circle is: " << AREA << endl;

  return;
}

#endif
