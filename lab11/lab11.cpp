// Programmer:       Henri Evjen
// MST Username:     hoe4ng
// Instructor Name:  Saiteja Konda
// Section:          A
// Date:             10/29/19
// File              lab11.cpp
// Purpose: the program will read in data from an input file and encrypt it
// using the Caesar cipher and will store encrypted data in output file


#include <iostream>
#include <fstream>
using namespace std;

// Definition: shifts the ASCII value of the passed character by shift value.
// Loops around alphabet if run off, then returns value
// Pre-condition: none
// Post-condition: ASCII value of character is shifted by shift value and 
// returned
char ceaserCipher(char data, const short SHIFT);


int main()
{
  // Delcarations
  short shift;
  ifstream fin;
  ofstream fout;
  string inpt;  

  cout << "Enter the key value to encrypt the given string: ";
  cin >> shift;

  fin.open("input.txt");
  fout.open("output.txt");
  getline(fin, inpt, '\n');

  for(short i = 0; static_cast<unsigned int>(i) < inpt.length(); i++)
  {
    char changed_char = inpt[i];
    fout << ceaserCipher(changed_char, shift);
  }      

  fin.close();
  fout.close();

  return 0;
}


char ceaserCipher(char data, const short SHIFT)
{
  if(isupper(data) && isalpha(data))
  {
    if((data + SHIFT) <= 'Z')
    {
      data = char(int(data) + SHIFT);
    }
    else
    {
      data = char(int(data) - (25 - SHIFT + 1));
    }
  }
  else if(islower(data) && isalpha(data))
  {
    if((data + SHIFT) <= 'z')
    {
      data = char(int(data) + SHIFT);
    }
    else
    {
      data = char(int(data) - (25 - SHIFT + 1));
    }
  }

  return data;
}
