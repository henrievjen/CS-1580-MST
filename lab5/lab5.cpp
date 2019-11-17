// Henri Evjen      hoe4ng
// Section A        Saiteja Konda
// 9/17/19          Lab 5
// Purpose: Program can either print the sum of odd numbers, numbers with 2,
// or numbers with 6 as least significant digit in a range

#include <iostream>
using namespace std;

int main() {
  // Declarations
  const short MIN_INPUT = 1, MAX_INPUT = 1000;
  short lower_input, upper_input, odd_sum = 0, end_2_sum = 0, end_6_sum = 0,
  choice;
  bool passable;
  
  // Gather lower input and upper input
  do {
    cout << "Please enter the min range: ";
    cin >> lower_input;
    cout << "Enter the max range: ";
    cin >> upper_input;

    passable = lower_input >= MIN_INPUT && upper_input <= MAX_INPUT &&
    lower_input < upper_input;

    if(!passable) {
      cout << "The input is invalid. Please enter the min range and the max "
      << "range" << endl;
    }
  } while(!passable);

  // Calculations
  for(short i = lower_input; i <= upper_input; i++) {
    if(i % 2 == 1) {
      odd_sum += i;
    }
    if(i % 10 == 2) {
      end_2_sum += i;
    }
    if(i % 10 == 6) {
      end_6_sum += i;
    }
  }

  cout << "Hello!" << endl;

  while(choice != 4) {
    // Output Choice Options
    cout << "Choose one of the following options (1 -> 4)" << endl;
    cout << "1. To print the sum of odd numbers in the range " << lower_input
    << " to " << upper_input << endl;
    cout << "2. To print the sum of numbers, with 2 as the least significant "
    << "digit, in the range " << lower_input << " to " << upper_input << endl;
    cout << "3. To print the sum of numbers, with 6 as the least significant "
    << "digit, in the range " << lower_input << " to " << upper_input << endl;
    cout << "4. To Quit" << endl;

    // Choice input
    cout << "What is your choice: ";
    cin >> choice;

    switch(choice) {
      case 1:
        cout << "The sum of odd numbers in the range " << lower_input << " to "
        << upper_input << " is " << odd_sum << endl;
        break;
      case 2:
        cout << "The sum of numbers ending in 2 in the range " << lower_input
        << " to " << upper_input << " is " << end_2_sum << endl;
        break;
      case 3:
        cout << "The sum of numbers ending in 6 in the range " << lower_input
        << " to " << upper_input << " is " << end_6_sum << endl;
        break;
      case 4:
        cout << "Thank you! Have a nice day." << endl;
        break;
      default:
        cout << "Input invalid." << endl;
    }
  }

  return 0;
}
