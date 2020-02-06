// Programmer:       Henri Evjen
// MST Username:     hoe4ng
// Instructor Name:  Saiteja Konda
// Section:          A
// Date:             12/3/19
// File              lab15.cpp
// Purpose: this program finds the most intelligent chicken and kills it. It
// then finds the dumbest chicken and saves it.

#include <iostream>
using namespace std;

class Chicken
{
  private:
    float m_brain_size;

  public:
    float getBrainSize()
    {
      return m_brain_size;
    }
    void setBrainSize(float size)
    {
      m_brain_size = size;

      return;
    }
};

int main()
{
  // Declarations
  int num_chickens;
  Chicken * chickens;
  int kill = 0, save = 0;

  cout << "Enter the number of chickens you have: ";
  cin >> num_chickens;
  chickens = new Chicken[num_chickens];

  for(int i = 0; i < num_chickens; i++)
  {
    float size;
    Chicken chick;

    cout << "Enter the brain size of chicken " << (i + 1) << ": ";
    cin >> size;
    chickens[i] = chick;
    chickens[i].setBrainSize(size);
  }

  for(int i = 0; i < num_chickens; i++)
  {
    if(chickens[i].getBrainSize() > chickens[kill].getBrainSize())
    {
      kill = i;
    }
    if(chickens[i].getBrainSize() < chickens[save].getBrainSize())
    {
      save = i;
    }
  }

  cout << "Killed chicken " << (kill+1) << " and saved chicken " << (save+1)
  << "." << endl;

  delete [] chickens;
  chickens = nullptr;

  return 0;
}
