// Henri Evjen       hoe4ng
// Section A         Saiteja Konda
// 9/10/19           Lab 4
// Purpose: Program prints the sum of even numbers, sum of numbers ending with
// 3, and the sum of numbers ending with 5, in the range x and y (inclusive)

#include <iostream>
using namespace std;

int main() {
  // Declarations
  const short MIN_INPUT = 0, MAX_INPUT = 999;
  short lower_input, upper_input, end_3_sum = 0, end_5_sum = 0, even_sum = 0;
  bool passable;

  // Gather Input
  do {
    cout << "Enter the upper bound, should be less than 1000 and greater than "
    << "0: ";
    cin >> upper_input;

    cout << "Enter the lower bound, should be less than the upper bound and "
    << "greater than 0: ";
    cin >> lower_input;

    passable = lower_input < upper_input && lower_input >= MIN_INPUT && 
    upper_input <=MAX_INPUT;

    if(!passable) {
      cout << "Input Invalid" << endl;
      cout << "Pleade enter the values again." << endl;
    } 
  } while(!passable);

  // Calculation
  for(short i = lower_input; i <= upper_input; i++) {
    if(i % 10 == 3) {
      end_3_sum += i;
    }
    if(i % 10 == 5) {
      end_5_sum += i;
    }
    if(i % 2 == 0) {
      even_sum += i;
    }
  }

  // Output
  cout << "The sum of numbers ending with 3 in the range "<<lower_input<<" to "
  << upper_input << " is " << end_3_sum << endl;
  cout << "The sum of numbers ending with 5 in the range "<<lower_input<<" to "
  << upper_input << " is " << end_5_sum << endl;
  cout << "The sum of even numbers in the range " << lower_input << " to "
  << upper_input << " is " << even_sum << endl;

  return 0;
}
