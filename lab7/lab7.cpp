// Henri Evjen     hoe4ng
// Section A       Saiteja Konda
// 10/1/19         Lab 7
// Purpose: Program has two functions that swap the largest of three arguments
// with the variable in the first argument. Does this for int and float values 

#include <iostream>
using namespace std;

/* Function Prototypes */

// Description: Outputs a greeting message to the screen 
// Pre-condition: None
// Post-condition: Greeting output to screen 
void greeting();

// Description: Places the largest of the three integers in num1
// Pre-condition: Must enter three integer values
// Post-condition: The largest of the three floats is assigned to num1
void findLargest(int& num1, int& num2, int& num3);

// Description: Places the largest of the three floats in float1
// Pre-condition: Must enter three float values
// Post-condition: The largest of the three floats is assigned to float1
void findLargest(float& float1, float& float2, float& float3);


int main() {
  // Declarations
  int num1 = 1, num2 = 3, num3 = 4;
  float float1 = 12.9, float2 = 122.3, float3 = 125;

  greeting();

  // Prints three ints
  cout << "1st number before swap (smallest of the three): " << num1 << endl;
  cout << "2nd number before swap: " << num2 << endl;
  cout << "3rd number before swap: " << num3 << endl << endl;

  findLargest(num1, num2, num3);

  cout <<"After swap, num1 will have the largest of the three values:"<<endl; 
  cout << "Value in num1 is: " << num1 << endl << endl;

  // Prints three floats
  cout << "1st float before swap (smallest of the three): " << float1 << endl;
  cout << "2nd float before swap: " << float2 << endl;
  cout << "3rd float before swap: " << float3 << endl << endl;

  findLargest(float1, float2, float3);

  cout <<"After swap, float1 will have the largest of the three values:"<<endl;   
  cout << "Value in float1 is: " << float1 << endl;

  return 0;
}


void greeting() {
  cout << "********* Welcome *********" << endl << endl;

  return;
}

void findLargest(int& num1, int& num2, int& num3) {
  if(num2 > num1 && num2 > num3) {
    num1 = num2;
  }
  else if(num3 > num1 && num3 > num2) {
    num1 = num3;
  }

  return;
}

void findLargest(float& float1, float& float2, float& float3) {
  if(float2 > float1 && float2 > float3) {
    float1 = float2;
  }
  else if(float3 > float1 && float3 > float2) {
    float1 = float3;
  }

  return;
}
