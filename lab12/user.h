#include <iostream>
using namespace std;

class User
{
  private:
    string m_name;
    string m_address;
    string m_phone_num;

    public:
      User();

      // Description: prompts user for name and sets user name to value
      // Pre-condition: none
      // Post-condition: user object's name member variable is assigned 
      void setName();

      // Description: prompts user for address and sets user address to value
      // Pre-condition: none
      // Post-condition: user object's address member variable is assigned 
      void setAddress();

      // Description: prompts user for number and sets user number to value
      // Pre-condition: none
      // Post-condition: user object's phone number member variable is assigned
      void setNumber();

      // Description: prints out all member variables of user object
      // Pre-condition: none
      // Post-condition: user object member variables are output to screen
      void printUser();
};
