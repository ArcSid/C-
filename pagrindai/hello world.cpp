#include <iostream>

using namespace std;

int main() {
  cout << "sveiki visi!" << endl;

  // Sveikieji skaičiai
  int a, b;
  a = 20;
  b = 7;
  cout << "a=" << a << endl;
  cout << "b=" << b << endl;
  cout << a << " + " << b << " = " << a + b << endl;
  cout << a << " - " << b << " = " << a - b << endl;
  cout << a << " * " << b << " = " << a * b << endl;
  cout << a << " / " << b << " = " << a / b << endl;

  // Liekanos operatorius %
  cout << a << " % " << b << " = " << a % b << endl; // 17 = 2 * 7 |+ 3|


  // Slankaus kablelio sk. 
  float c = 2.5, d = 3;
  cout << "c=" << c << endl;
  cout << "d=" << d << endl;
  cout << c << " + " << d << " = " << c + d << endl;
  cout << c << " - " << d << " = " << c - d << endl;
  cout << c << " * " << d << " = " << c * d << endl;
  cout << c << " / " << d << " = " << c / d << endl;

  // Simboliai (Characters)
  char simbolis = 'W';
  cout << simbolis << endl; 

  string zodis = "Mano zodis ()_+_";
  cout << zodis << endl;

  bool yra_vasara = true; // true = 1;   false = 0;
  cout << yra_vasara << endl;
  
  return 0;
}