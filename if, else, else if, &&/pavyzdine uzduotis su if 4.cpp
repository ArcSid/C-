#include <iostream>
using namespace std;

int main() 
{
  double n, m; // m yra saldainio kaina
  cout << "saldainiu kieki:  " << endl;
  cin >> n;
  cout << "" << endl;
  if (n<=1000)
  {
    m=0.28;
    cout << n << " saldainiu kainuoja:  " << m*n*1.5 << " australijos doleriu " << endl;
  }
  else if (2000<=n)
  {
    m = 0.28 * (97/100);
    cout << n << " saldainiu kainuoja:  " << m*n*1.5 << " australijos doleriu " << endl;
  }
else
  {
    m=(0.28*96)/100;
    cout << n << " saldainiu kainuoja:  " << m*n*1.5 << " australijos doleriu " << endl;
  }
  return 0;
}