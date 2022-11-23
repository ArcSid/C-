#include <iostream>
using namespace std;

int main() {
  int amz_sk;
  cout << "iveskite savo amziu:  " << endl;
  cin >> amz_sk;

  if (amz_sk < 18) {         // Jeigu amžius mažesnis už 21
    cout << "negalima \n";
  }
  else if(amz_sk < 21) {
    cout << "negalima lietuvoje \n";
  }
  else {                     // Priešingu atveju
    cout << "galima \n";
  }
}

/*
  Less than: a < b
  Less than or equal to: a <= b
  Greater than: a > b
  Greater than or equal to: a >= b
  Equal to a == b
  Not Equal to: a != b
*/