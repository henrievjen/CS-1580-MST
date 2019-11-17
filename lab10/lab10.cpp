// Programmer:      Henri Evjen
// MST Username:    hoe4ng
// Instructor Name: Saiteja Konda
// Section:         A
// Date:            10/22/19
// File:            lab10.cpp
// Purpose: program takes first name, last name, age, username, and password
// input from user. Username must be palindrome and passwords must match

#include <iostream>
#include <cstring>
using namespace std;

// Description: check if NTCA that is passed is a palindrome
// Pre-condition: arr must end with a null character (\n)
// Post-condition: returns a bool indicating if NTCA is palindrome
bool checkPalindrome(char arr[]);


int main()
{
  // Declarations
  const short USERNAME_LIMIT = 11, PASSWORD_LIMIT = 20;
  char first_name[25], last_name[25], username[25], password[25],
  password_repeat[25];
  short age;
  bool repeat_username = true, repeat_password = true;

  cout << "Enter your first name:" << endl;
  cin.getline(first_name, 25, '\n');

  cout << "Enter you last name:" << endl;
  cin.getline(last_name, 25, '\n');

  cout << "Enter your age:" << endl;
  cin >> age;
  cin.ignore(256, '\n');

  // Get Username
  do
  {
    cout << "Enter a new username you want (less than 11 chars and should be a"
    << " palindrome): " << endl;
    cin.getline(username, 11, '\n');

    if(strlen(username) <= USERNAME_LIMIT && checkPalindrome(username))
    {
      repeat_username = false;
    }
    else
    {
      repeat_username = true;
    }

    if(repeat_username)
    {
      cout << "Username is invalid" << endl;
    }
  } while(repeat_username);

  // Get Password
  do
  {
    cout << "Enter a new password for your account (size of pass should be "
    << "less than 20): ";
    cin.getline(password, 20, '\n');
    
    cout <<"Please re-enter the password: ";
    cin.getline(password_repeat, 20, '\n');

    if(strcmp(password, password_repeat) || strlen(password) >= PASSWORD_LIMIT)
    {
      cout << "The 2 passwords don't match" << endl;
    }
    else
    {
      repeat_password = false;
    }
  } while(repeat_password);

  // Output
  cout << "Your name is: " << first_name << " " << last_name << endl;
  cout << "Your username: " << username << endl;
  cout << "Your password: " << password << endl;

  return 0;
}


bool checkPalindrome(char arr[])
{
  // Declarations
  char reverseArr[12] = "";
  short count = 0;

  for(short i = strlen(arr) - 1; i >= 0; i--)
  {
    reverseArr[count] = arr[i];
    count++;
  }

  return (!strcmp(arr, reverseArr));
}
