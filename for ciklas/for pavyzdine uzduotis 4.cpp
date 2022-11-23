#include <iostream>
#include <iomanip>
using namespace std;

// pi = 4* (1 - 1/3 + 1/5 - 1/7 + ...)
// sum_of = 1 - 1/3 + 1/5 - 1/7 + ...
// pi = 4 * sum_of

int main() {
  double pi=0;
  double sum_sk=0;
  int zenklas = 1;
  
  for (double k = 1;k<=999999999;k+=2)
    {
      sum_sk+=zenklas*1/k;
      zenklas*=-1;
    }
  cout << setprecision(20) << 4*sum_sk << endl;
}