#include <iostream>
#include <cmath>
using namespace std;
void uzd1()
{
	int sum = 0, s, n;
	cout << "iveskite skaiciu kieki:  " << endl;
	cin >> n;
	cout << "iveskite skaiciu:  " << endl;
	cin >> s;
	for (int sk = 1; sk <= n; sk++) {
		cout << sk << "   " << s * pow(10, n - sk) << endl;
		sum += sk * s * pow(10, n - sk);
	}
  // 1 * 2 * 100
  // 2 * 2 * 10
  // 3 * 2 * 1
	cout << sum << endl;
	cout << endl << endl;
}
void uzd2()
{

	int sum = 0, s, n,b=1;
	cout << "iveskite skaiciu kieki:  " << endl;
	cin >> n;
	cout << "iveskite skaiciu:  " << endl;
	cin >> s;
	for (int sk = 1; sk <= n; sk++) {
		cout << sk << " * " << s * pow(10, n - sk +1) << " + " << 2*sk - 1 << endl;
		sum += sk * s * pow(10, n - sk +1) + b;
    b += 2;
	}
	cout << sum << endl;
	cout << endl << endl;

  // 2. s1 ; ss3 ; sss5 ; ssss7 ; sssss9 ; ...
  // Pvz.: N=3, s=2, tai  21 + 223 + 2225  = 2469.

  //           21 + 223 + 2225 + 22227 =
  // Vienetai:  1 +   3 +    5 + 7     = 1 + 3 + 5 + 7
  // Dešimtys: 20 +  20 +   20 + 20    = 4 * 20
  // Šimtai  :  0 + 200 +  200 + 200   = 3 * 200
  // Tukst.  :  0 +   0 + 2000 + 2000  = 2 * 2000
  // Deš.Tukst.:0 +   0 +    0 + 20000 = 1 * 20000
  // = 
  // 1 * 20000 + 1
  // 2 * 2000  + 3
  // 3 * 200   + 5
  // 4 * 20    + 7
}
void uzd3()
{
	int sk[20] = { 2, 7, 10, 12, 14, 20, 25, 29, 32, 36, 44, 48, 62, 64, 64, 70, 76, 88, 97, 100 }, sum = 0,sudetis = 0;
	for (int skaic = 0; skaic < 20; skaic++)
	{
		if (sk[skaic] >= 50)
		{
			cout << sk[skaic] <<"  yra didesnis uz 50" << endl;
			sum++;
			sudetis += sk[skaic];
		}
	}
	cout << "Is viso skaiciu didesniu uz 50:   " << sum << endl;
	cout << "Skaiciu didesniu uz 50 suma:   " << sudetis << endl;
	cout << endl << endl;
}
void uzd4() 
{
	int sk[31] = { 5045, 7583, 5514, 4466, 2474, 86, 8809, 4401, 5720, 2738, 9023, 8553, 789, 4063, 8548, 5070, 8064, 9242, 3691, 5622, 763, 8856, 6704, 9330, 554, 7910, 9277, 3850, 4329, 7752, 2559 };
	for (int i = 0;i<=31;i++)
		if (sk[i] >= 7000)
		{
			cout << i+1 << "d.  ";
		}
	cout << endl << endl;
}
void uzd5()
{
	int skaicius=0;
	double didziausias = 0;
	double sk[20] = { 82.4, 49.52, 55.46, 51.86, 9.31, 100, 100, 200, 39.59, 94.71, 200, 92.78, 99.43, 16.22, 11.98, 23.68, 0.41, 1.93, 82.38, 7.91 };
	for (int i = 0; i < 20; i++)
	{
		if (sk[i]>didziausias) 
		{
			didziausias = sk[i];
			skaicius = 1;
		}

    if (sk[i] == didziausias)
		{
			skaicius += 1;
		}
	}
  
	// for (int i = 0; i < 20; i++)
	// {
	// 	if (sk[i] == didziausias)
	// 	{
	// 		skaicius += 1;
	// 	}
	// }
	cout << "didziausias skaicius masyve:  " << didziausias << endl;
	cout << endl;
	cout << "is viso skaiciu kaip " << didziausias << " masyve yra:  " << skaicius << endl;
	cout << endl << endl;
}

int main()
{
	while (1)
	{
	char raide;
	cout << "(a) uzd 1" << endl;
	cout << "(b) uzd 2" << endl;
	cout << "(c) uzd 3" << endl;
	cout << "(d) uzd 4" << endl;
	cout << "(e) uzd 5" << endl;
	cout << "iveskite bet kokia kita raide kad iseiti is programos" << endl;
	cin >> raide;
	cout << endl << endl;
	switch (raide) {
	case 'a':
		uzd1();
		break;
	case 'b':
		uzd2();
		break;
	case 'c':
		uzd3();
		break;
	case 'd':
		uzd4();
		break;
	case 'e':
		uzd5();
		break;
	default:
		return 0;
	}
	}
}