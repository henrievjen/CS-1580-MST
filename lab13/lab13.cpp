// Programmer:       Henri Evjen
// MST Username:     hoe4ng
// Instructor Name:  Saiteja Konda
// Section:          A
// Date:             11/12/19
// File              lab13.cpp
// Purpose: this program is a fraction class that allows for the addition and
// multiplication of fractions. A user can print fractions and check equality.

#include <iostream>
using namespace std;

class Fraction
{
  public:
    // Constructor
    Fraction(int n, int d): m_num(n), m_den(d) {};

    // Public interface functions
    Fraction operator / (const Fraction & rhs);

    // Friend functions
    friend ostream & operator << (ostream & os, const Fraction & rhs);
    friend bool operator == (const Fraction & lhs, const Fraction & rhs);
    friend Fraction operator + (const Fraction & lhs, const Fraction & rhs);

  private:
    int m_num;
    int m_den;
};


int main()
{
  // Declarations
  Fraction f1(1, 2);
  Fraction f2(3, 6);

  cout << "Fraction one has value: " << f1 << endl;
  cout << "Fraction two has value: " << f2 << endl;

  if(f1 == f2)
  {
    cout << "The two fractions are equivalent!" << endl;
  }
  else
  {
    cout << "The two fractions are not equivalent!" << endl;
  }

  cout << "Fraction one divided by fraction two is: " << (f1 / f2) << endl;

  cout << "The sum of the two fractions is: " << (f1 + f2) << endl;

  return 0;
}


Fraction Fraction::operator / (const Fraction & rhs)
{
  return Fraction((m_num * rhs.m_den), (m_den * rhs.m_num));
}

ostream & operator << (ostream & os, const Fraction & rhs)
{
  os << rhs.m_num << "/" << rhs.m_den;
  return os;
}

bool operator == (const Fraction & lhs, const Fraction & rhs)
{
  return ((lhs.m_num * rhs.m_den) == (lhs.m_den * rhs.m_num));
}

Fraction operator + (const Fraction & lhs, const Fraction & rhs)
{
  if(lhs.m_den == rhs.m_den)
  {
    return Fraction((lhs.m_num + rhs.m_num), (lhs.m_den));
  }
  else
  {
    return Fraction(((rhs.m_den * lhs.m_num) + (lhs.m_den * rhs.m_num)), 
    (lhs.m_den * rhs.m_den));
  }
}
