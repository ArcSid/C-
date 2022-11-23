#include <iostream>
using namespace std;

int main() 
{
  int a,b;
  cout << " ivesk viena skaiciu:  " << endl;
  cin >> a;
  cout << " iveskite kita skaiciu:  " << endl;
  cin >> b;

  cout << a << " % " << b << endl;
  
  if (a%b == 0)
  {
    cout << "skaicius dalus" <<endl;
  } 
  else 
  {
    cout << "skaicius nedalus" << endl;
  }
}