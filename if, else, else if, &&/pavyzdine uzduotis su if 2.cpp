#include <iostream>
using namespace std;
int main() {
  double k, n, m, a, b, c, N, izamb;
  cout << "iveskite krastines:  " << endl;
  cin >> k >> n >> m;

  if (n > m && n > k) { // && AND IR
    // kad n yra ilgiausioji krastine
    c = n;
    b = m;
    a = k;
  } else if (m > n && m > k) { // && AND IR
    // kad m yra ilgiausioji krastine
    c = m;
    b = n;
    a = k;
  } else {
    // liko tik, kad ilgiausioji yra k
    c = k;
    b = m;
    a = n;
  }

  if (c * c == b * b + a * a) {
    cout << "trikampis yra status" << endl;
  } else {
    cout << "trikampis nera status" << endl;
  }
}