#include <iostream>
#include <cmath>
using namespace std;
int main ()
{
  char raide;
  cout << "galimos uzduotys: " << endl;
  cout << "(a) lapu skaicius" << endl << "(b) valandos minutes" << endl << "(c) trikampis" << endl;
  cout << "Pasirinkti uzduoti: " << endl;
  cin >> raide;
  if ( raide == 'a' )
  {
    // 2.1 Mokiniai lapai
    double n, m, x;
    cout << endl << "lapu skaicius" << endl << endl;
    cout << "iveskite mokiniu skaiciu:  " << endl;
    cin >> n;
    cout << "iveskite lapu skaiciu:  " << endl;
    cin >> m;
    x = n * m;
    cout << "is viso lapu atspausdinti reikia:  " << x << endl;
  }
  if ( raide == 'b' )
  {
    // 2.2 Valandos minutes
    cout << " " << endl;
    cout << "valandos minutes" << endl;
    cout << " " << endl;
    double iks,y,min,s;
    cout << "iveskite valandu skaiciu:  " << endl;
    cin >> iks;
    cout << "iveskite minuciu skaiciu:  " << endl;
    cin >> y;
    min=(iks*60)+y;
    s=min*60;
    cout << "minuciu skaicius:  " << min << endl;
    cout << "sekundziu skaicius:  " << s << endl;
  }
if (raide == 'c' )
{
  cout << " " << endl;
  cout << "trikampiai" << endl;
  cout << " " << endl;
  float per,pl,a,b,gd,brd;
  cout << "iveskite a:  " << endl;
  cin >> a;
  cout << "iveskite b:  " << endl;
  cin >> b;
  gd=(a*a)+(b*b);
  brd=sqrt(gd);
  per=a+b+brd;
  pl=(a*b)/2;
  cout << "trikampio perimetras:  " << per << endl;
  cout << "trikampio plotas  " << pl << endl;
}
  return 0;
}