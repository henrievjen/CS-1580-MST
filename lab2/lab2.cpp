//	Programmer: Henri Evjen						Date: 8/27/19
//	Section: A 
//	File: lab2.cpp  // Correcting some common errors

//1
//including the I/O stream library
#include <iostream>
using namespace std;

int main()
{
  // Declarations	
  char first_name[100];
  int digit=0;
  int temp1=0;
  int year=0;
  int decision=10;
  //2,3
  // Greetings
  cout<<"Welcome User! If you are seeing this message that means that you have successfully debugged the code. You will get your 100 points."<<endl; 
  cout<<"It's time for some fun now. If you are interested in playing a game, please enter 1 else 0."<<endl;
  cin>>decision;
  // game computations and output
  if(decision==0)
  {
    cout<<"Thank you for attending today's class. See you next Tuesday. Don't forget to sign in before you leave.";
  }  
  else
  {
    cout<<"PLease enter your first name."<<endl;

    cin>>first_name;
    //4
    cout<<"Hello "<<first_name<<". Let's play the number game. I will guess your age by the end of the game."<<endl;
  
    cout<<"Enter any digit between 2 and 10"<<endl;

    cin>> digit;

    digit = digit * 2;
    digit = digit + 5;
    digit = digit * 50;
  
    cout<<" If you have already had your birthday this year enter 1757 else enter 1756"<<endl;
    //5
    cin>> temp1;
  
    digit = digit + temp1;
    digit = digit + 12;
    //6  
    cout<<" Enter the four digits year you were born "<<endl;
    cin>>year;
    
    digit = digit - year;
    digit = digit % 100;
    //7
    cout<<"Your age is "<<digit<<endl;
    cout<<"Thank you for playing the game "<<first_name<<". Hope you had fun! Please sign in before you leave. See you next Tuesday."<<endl;
  }

  return 0;  
}

