#include <cmath>
#include <iostream>
using namespace std;

int main() {
  int N, keturzenkl_sk = 1000;
  while (keturzenkl_sk <= 9999) {
    N = keturzenkl_sk;
    if (((N / 100 + N % 100) * (N / 100 + N % 100)) == N) {
      cout << "skaicius  " << N << "  turi savybe!" << endl;
    } else {
      // cout << "skaicius  " << N << "  savybes neturi" << endl;
    }

    keturzenkl_sk += 1; /* Multiline comment  */
  }

  return 0;
}