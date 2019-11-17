#include <iostream>
#include "user.h"
using namespace std;

User::User()
{
  cout << endl << "Hello User" << endl << endl;
}

void User::setName()
{
  string name;
  cout << "Enter your name: ";
  getline(cin, name, '\n');
  m_name = name;
  return;
}

void User::setAddress()
{
  string address;
  cout << "Enter your address: ";
  getline(cin, address, '\n');
  m_address = address;
  return;
}

void User::setNumber()
{
  bool ten_digits = false;
  string phone_num;
  
  do
  {
    cout << "Enter your mobile number: ";
    getline(cin, phone_num, '\n');

    if(phone_num.length() != 10) {
      cout << "Error! Please enter a valid phone number." << endl;
    }
    else {
      ten_digits = true;
    }
  } while(!ten_digits);

  m_phone_num = phone_num;

  return;
}

void User::printUser()
{
  cout << endl << "Name: " << m_name << endl;
  cout << "Address: " << m_address << endl;
  cout << "Cell Number: " << m_phone_num << endl;
  cout << "Have a nice day" << endl;

  return;
}
