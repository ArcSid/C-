#include <iostream>
using namespace std;
int main() {
    int a,b, bmk;
    cout << "iveskite a:  " << endl;
    cin >> a;
    cout << "iveskite b:  " << endl;
    cin >> b;
    if (a > b)
        bmk = a;
    else
        bmk = b;
    while (1) {
        if (bmk % a == 0 && bmk % b == 0) {
            cout << "maziausias bendras kartotinis skaicius " << a << " ir " << b << " yra " << bmk;
            break;
        }
      bmk++;
    }
    return 0;
}

/*
  10 12

  20 12
  20 24
  30 24
  30 36
  40 36
  40 48
  50 48
  50 60
  60 60 // MBK
*/
