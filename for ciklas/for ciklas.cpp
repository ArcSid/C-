#include <iostream>
using namespace std;
int main() {
  cout << "Pirmas zingsnis \n";
  //   pradzia     ; salyga (pries) ; po kiekvieno zingsnio
  for (int startas = 0; startas < 20; startas += 1) {
    cout << startas << " ";
  }
  cout << endl << endl;

  for (int i = 0; i < 3; i++) { // i = i + 1  <=>  i += 1  <=>  i++  <=>  ++i
    cout << i << ": \n";

    // for (int j = 0; j < 10; j++) {
    //   cout << j << " ";
    // }
    cout << endl;
  }

  // =========
  for (int i = 0; i < 7; i++){
    cout << i + 1 <<"."<< "labas"<< endl;
  }
  for (int i = 0; i<=25; i+=3)
    {
      cout << i << " ";
    }
  // 512 511 ... 497
  cout << endl << endl;
  for (int i = 512; i >= 497; i-=1)
    {
      cout << i << " ";
    }
  cout << endl << endl;

  // ========
  // y = f(x) = a * x^2
  // -10 -9 ... 0 ... 9 10
  // x      y
  // -10    100
  // ...
  int a;
  cin >> a;
  for (int i = -10; i <= 10; i++)
    {
      cout <<"f("<<i<<")"<<" = "<<a*(i*i) << endl;
    }
}