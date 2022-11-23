#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
  // double pi = 3.1428;
  // cout << setprecision(0) << pi << endl;
  // cout << setprecision(1) << pi << endl;
  // cout << setprecision(2) << pi << endl;
  // cout << setprecision(3) << pi << endl;
  // cout << setprecision(4) << pi << endl;
  // cout << setprecision(10) << pi << endl;
  
  int n;
  double m, t, sum = 0;
  cin >> m >> n;
  cout << m << " " << n << endl;
  
  for (int l = 0;l < n; l++)
    {
      cout << "t" << l + 1 << " = ";
      cin >> t;
      sum+=t;
    }
  cout << "vidurkis= " << sum/n << endl;
  // V = m / (sum/n); // int / bet_kas = int
  cout << "vidurinis greitis=  " << setprecision(2) << m / (sum/n);
  cout << " sugaiso " << setprecision(-5) << sum <<" s laiko"<< endl;
  
}