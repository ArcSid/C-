#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

void uzd3() {
  int N, SUM = 0;
  double P;
  cout << "iveskite pinigu kieki:  " << endl;
  cin >> N;
  cout << "iveskite metiniu palukanu kieki procentais:  " << endl;
  cin >> P;
  for (; N <= 1000000;) {
    N = N + N * (P / 100);
    SUM++;
  }
  cout << "po:  " << SUM << "  metu vaikas tures 1 milijona" << endl;
}

void uzd4() {
  int sum = 0, s, n;
  cout << "iveskite skaiciu kieki:  " << endl;
  cin >> n;
  cout << "iveskite skaiciu:  " << endl;
  cin >> s;
  for (int sk = 1; sk <= n; sk++) {
    cout << sk << "   " << s * pow(10, n - sk) << endl;
    sum += sk * s * pow(10, n - sk);
  }
  cout << sum << endl;
  // cout << sum << endl;
  // 5 x 3
  // 50 x 2
  // 500 x 1

  // 5 + 55 + 555 + 5555
  // =
  // 5 +  5 +   5 +    5 = 4 x  5 x 10^0
  // 0 + 50 +  50 +   50 = 3 x  5 x 10^1
  // 0 +  0 + 500 +  500 = 2 x  5 x 10^2
  // 0 +  0 +   0 + 5000 = 1 x  5 x 10^3
}

void uzd6() {}

void uzd2() {
  double sk, pazimys;
  double sum = 0;
  cout << "iveskite kiek is viso pazymiu:  " << endl;
  cin >> sk;
  for (int b = 1; b <= sk; b++) {
    cout << "iveskite pazymi: " << endl;
    cin >> pazimys;
    sum += pazimys;
  }
  cout << setprecision(3) << "average: " << sum / sk << endl;
  cout << endl << endl;
}

void uzd11() {
  int i, n;
  bool yrapirminis = true;

  cout << "iveskite skaiciu:  " << endl;
  cin >> n;
  if (n == 0 || n == 1) {
    yrapirminis = false;
  }
  for (i = 2; i <= n / 2; ++i) {
    if (n % i == 0) {
      yrapirminis = false;
      break;
    }
  }
  if (yrapirminis)
    cout << n << " yra pirminis";
  else
    cout << n << " nera pirminis";
}

void uzd1() {
  for (int i = 2; i < 100; i++)
    for (int j = 2; j < i; j++) {
      if (i % j == 0)
        break;
      else if (i == j + 1)
        cout << i << " yra pirminis skaicius " << endl;
    }
}

void uzd5() {
  int sum = 0;
  for (int sk = 1; sk < 100000; sk++) {
    if (sk % 3 == 0)
      sum++;
  }
  cout << "laimingu skaiciu yra:  " << sum << endl;
}

int main() {
  while (1) {
    char pasirinkimas;
    cout << "(a)uzduotis 1" << endl;
    cout << "(b)uzduotis 1 extra" << endl;
    cout << "(c)uzduotis 2" << endl;
    cout << "(d)uzduotis 5" << endl;
    cout << "(e)uzduotis 3" << endl;
    cout << "(f)uxduotis 4" << endl;
    cout << "iveskite bet kokia kita raide kad uzbaigti programa" << endl;
    cin >> pasirinkimas;
    
    switch (pasirinkimas) {
      case 'a':
        uzd1();
        break;
      case 'b':
        uzd11();
        break;
      case 'c':
        uzd2();
        break;
      case 'd':
        uzd5();
        break;
      case 'e':
        uzd3();
        break;
      case 'f':
        uzd4();
        break;
      default:
        return 0;
    }
    
    // if (pasirinkimas == 'f')
    // {
    // 	uzd4();
    // }
    // if (pasirinkimas == 'a')
    // {
    // 	uzd1();
    // }
    // if (pasirinkimas == 'b')
    // {
    // 	uzd11();
    // }
    // if (pasirinkimas == 'c')
    // {
    // 	uzd2();
    // }
    // if (pasirinkimas == 'd')
    // {
    // 	uzd5();
    // }
    // if (pasirinkimas == 'e')
    // {
    // 	uzd3();
    // }
    // else
    // {
    // 	break;
    // }
  }

  return 0;
}