// Henri Evjen       hoe4ng
// Section A         Saiteja Konda
// 9/24/19	     Lab 6
// Purpose: The program will convert temperatures in Celsius to Fahrenheit

#include <iostream>
using namespace std;

// Function Declarations
void greeting();
float take_input();
float calculate_fahrenheit(const float celsius);
void output_result(const float fahrenheit);


// Main Function
int main() {
  // Declarations
  float celsius, fahrenheit;

  greeting();
  celsius = take_input();  
  fahrenheit = calculate_fahrenheit(celsius);
  output_result(fahrenheit);

  // Closing Message
  cout << "Thank you for using the converter. Have a nice day!" << endl;

  return 0;
}


// Function Definitions

void greeting() {
  cout << "Hello! I am the celsius to fahrenheit converter." << endl;

  return;
}

float take_input() {
  float celsius;
  
  do
  {
    cout<<"Enter the temperature in celsius to convert it to Fahrenheit"<<endl;
 
    // Input
    cin >> celsius;

    if(celsius < -273.15) {
      cout << "Error. The lowest possible temperature that can be achieved"
      << " in Celsius is -273.15" << endl;
    }
  } while(celsius < -273.15);

  return celsius;
} 

// Calculate Fahrenheit
float calculate_fahrenheit(const float celsius) {
  return (celsius * (9.0/5)) + 32;
}

void output_result(const float fahrenheit) {
  cout << "For the inputted temperature in celsius, the temperature in "
  << "fahrenheit is " << fahrenheit << endl;

  return;
}
