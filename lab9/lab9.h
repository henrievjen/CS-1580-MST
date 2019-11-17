// Description: outputs a greeting message to the screen
// Pre-condition: none
// Post-condition: greeting message is output to screen
void greet();

// Description: prompts the user to input the height and weight of the 5 people
// Pre-condition: none
// Post-condition: arrays height and weight are filled with data of 5 people
void inputHeightAndWeight(float height[], float weight[], const int SIZE);

// Description: BMI of 5 people is calculated and put into bmi array
// Pre-condition: none
// Post-condition: bmi array is filled with the BMIs of the 5 people
void calculateBmi(const float HEIGHT[], const float WEIGHT[], const int SIZE,
float bmi[]);

// Description: outputs the BMIs of the 5 people to the screen
// Pre-condition: none
// Post-condition: the BMIs of the 5 people are output to the screen
void outputBmi(const float BMI[], const int SIZE);
