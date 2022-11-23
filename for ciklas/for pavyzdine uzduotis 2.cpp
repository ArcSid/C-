#include <iostream>
using namespace std;
int main() 
{
  // 2 + 4 + 6 + 8 + 10 + 12 + 14 + 16 + 18 + 20
  // Suma
  int sum = 0;
  for (int sk=0; sk<=20; sk+=2)
    {
      // cout << "+" << sk << endl;
      sum += sk;
      // cout << " = " << sum << endl;
    }
  cout << "1. Sum = " << sum << endl;

  // 0.5 + 2 + 3.5 + 5 + 6.5 + 8 + 9.5  
  double sum2 = 0;
  int skaiciu_kiekis = 0;
  for (double sk = 0.5;sk <= 10;sk+=1.5)
    {
      sum2 += sk;
      skaiciu_kiekis++;
    }
  cout << "2. sum= " << sum2 << endl;
  cout << "2. average= " << sum2 / skaiciu_kiekis << endl;


  int kaina, kainu_suma = 0;
  cout << "Įveskite prekių kainas: \n";
  while (true) {
    cin >> kaina;
    if (kaina < 0) {
      break;
    }

    kainu_suma += kaina;
  }
  cout << kainu_suma << endl;
}