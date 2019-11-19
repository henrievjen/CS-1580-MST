// Programmer:       Henri Evjen
// MST Username:     hoe4ng
// Instructor Name:  Saiteja Konda
// Section:          A
// Date:             11/19/19
// File              lab14.cpp
// Purpose: this program has the user input two arrays, one ascending and one
// descending. The program accesses and merges the two arrays using pointers

#include <iostream>
using namespace std;

int main()
{
  // Declarations
  int arr1[5], arr2[5], mergedArr[10];
  int *p1 = &arr1[0], *p2 = &arr2[0], *p3 = &mergedArr[0];
  short count1 = 0, count2 = 4;

  // Input Array 1
  cout << "Enter 1st array: ";
  for(short i = 0; i < 5; i++)
  {
    cin >> *(p1 + i);
  }

  // Input Array 1
  cout << "Enter 2nd array: ";
  for(short i = 0; i < 5; i++)
  {
    cin >> *(p2 + i);
  }

  // Merge
  for(short i = 0; i < 10; i++)
  {
    if(*(p1 + count1) < *(p2 + count2))
    {
      *(p3 + i) = *(p1 + count1);
      count1++;
    }
    else
    {
      *(p3 + i) = *(p2 + count2);
      count2--;
    }
  }

  // Output Merged Array
  cout << "After merging the two arrays, the final array is: ";
  for(short i = 0; i < 10; i++)
  {
    cout << *(p3 + i) << " ";
  }

  cout << endl;

  return 0;
}
