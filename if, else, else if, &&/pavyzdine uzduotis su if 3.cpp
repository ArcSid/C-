#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  double n,m;
  cout << "iveskite jono surinkta tasku skaiciu:  " << endl;
  cin >> n;
  cout << "iveskite petro surinkta tasku skaiciu:  " << endl;
  cin >> m;
  cout << "" << endl;

  if (n==m)
  {
    cout << "lygiosios!" << endl;
  } else if (n>m)
  {
    cout << "laimejo jonas! " << endl;
  } else // (n<m)
  {
    cout << "laimejo petras!  " << endl;  
  }
  
  
  return 0;
}