#include <cmath>
#include <iostream>
using namespace std;
int main() {
  while (1) {
    char raide; // norejau sita prisimint, daugiau uzduociu nesinori daryt gal
                // dar padarysiu iki kito savaitgalio
    cout << "galimos uzduotys: " << endl;
    cout << "(a) braskiu skaiciavimas" << endl
         << "(b) miego skaiciavimas" << endl
         << "(c) bendras dalinklis" << endl
         << "(d) skaiciu seka" << endl
         << "(z) uzbaigti uzduoti" << endl;
    cout << "Pasirinkti uzduoti: " << endl;
    cin >> raide;
    if (raide == 'a') {
      // b, b + d, b + 2d, b + 3d, ...
      int b, d, n, g;
      cout << "iveskite braskiu skaiciu:  " << endl;
      cin >> b;
      cout << "iveskite kiek braskiu daugiau prinoksta:  " << endl;
      cin >> d;
      cout << "iveskite dienu skaiciu:  " << endl;
      cin >> n;
      g = (b + d) * n; // b+d, b+d, b+d, ...
      cout << "per " << n << " dienas surinko " << g << " braskes" << endl;
    }
    if (raide == 'b') {
      int t, a;
      for (int a = 0;a <= 18;a++)
        {
          t = 8 + (18 - a) / 2;
          cout << "amziui:  " << a << " reikia " << t << " h. miego" << endl;
        }
    }
    if (raide == 'c') {
      int m, p;
      cout << "iveskite m:  " << endl;
      cin >> m;
      cout << "iveskite n:  " << endl;
      cin >> p;
      for ( ;m != p; ) {
        if (m > p) {
          m -= p;
        } else {
          p -= m;
        }
      }
      cout << "skaiciaus didziausias bendras daliklis: " << m << endl;
    }

    // 3, 5, 9, 15, 23, 33, 45, ...
    //+0 +2 +4 +6  +8  +10 +12
    if (raide == 'd')
    {
      int kintamasis=3;
      for (int skaic = 0;skaic <=20;skaic+=2)
      {
        kintamasis+=skaic;
        cout << kintamasis << endl;
      }
    
    cout << endl << endl;
    }

    if (raide == 'z') {
      break;
    }
  }
}