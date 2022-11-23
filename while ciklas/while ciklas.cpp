#include <iostream>
using namespace std;
int main() {

  int i = 0;
  
  while (i < 10) { // daryti_kol (salyga)
    cout << i << ". raimundas \n";

    i = i + 2;
  }

  int ivestis = 1;

  while (ivestis < 9) {
    cin >> ivestis;
    cout << "Ivedei " << ivestis << endl;
  }
  
}