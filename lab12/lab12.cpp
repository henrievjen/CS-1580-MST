// Programmer:       Henri Evjen
// MST Username:     hoe4ng
// Instructor Name:  Saiteja Konda
// Section:          A
// Date:             11/5/19
// File              lab12.cpp
// Purpose: this program will create two user objects, storing their name, 
// address, and mobile number, and will output their data to the screen

#include <iostream>
#include "user.h"
using namespace std;

int main()
{
  User person1;
  person1.setName();
  person1.setAddress();
  person1.setNumber();
  person1.printUser();

  User person2;
  person2.setName();
  person2.setAddress();
  person2.setNumber();
  person2.printUser();  

  return 0;
}
