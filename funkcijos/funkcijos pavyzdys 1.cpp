#include <iostream>
using namespace std;

int squareAreasDifference(int r) {
  return 2*r*r;
}

bool isSafeBridge(string s) {
	for (int i =0;i<s.length();i++)
	{
		if (s[i]== ' ')
		{
			return false;
		}
	}
	return true;
}

string reverse(string str) {
	string str2 = "";
	for (int i = str.length()-1; i>=0;i--)
	{
    str2 += str[i];
    // cout << str[i] << "  " << i << " → " << str.length()-1-i << endl;
	}
	return str2;
}

// @@C@@
bool jackpot(string jackpot)
{
  int i=jackpot.length();
  for (int b=0;b<i-1;b++)
    {
      // cout << b << " " << b+1 << endl;
      if (jackpot[b]!=jackpot[b+1]){
        return false;
      }
    }
  return true;
}

void colorInvert(int r, int g, int b) {
	cout << "(" << 255-r << ", " << 255-g << ", " << 255-b << ")" << endl;
}

// [1, 2, 3]
void arrayOfMultiples(int num, int length) {
  cout<<"[";
  for (int i=1;i<=length;i++)
    {
      cout << num*i;
      if (i<=length-1)
      {
        cout << " , ";
      }
    }
  cout << "]" << endl;
}

int main() {
  for (int r = 5;r<=7;r++)
    {
      // int result = squareAreasDifference(r);
      cout << "square area difference: "<< squareAreasDifference(r) << endl;
    }
  cout << "is safe bridge: " << isSafeBridge("# # # # # # #") << endl;
  cout << "is safe bridge: " << isSafeBridge("####") << endl;
  cout << "is safe bridge: " << isSafeBridge(" ####") << endl;
  cout << "is safe bridge: " << isSafeBridge("#### ") << endl;

  cout << "Reversed string:  \n" << reverse("cdef") << endl;
  cout << "Reversed string:  \n" << reverse(" bbgggdiiijt ") << endl;
  cout << "Reversed string:  \n" << reverse("HHgg JJgo") << endl;
  cout << "Reversed string:  \n" << reverse("") << endl;

  cout << "is jackpot:  " << jackpot("@@@") << endl;
  cout << "is jackpot:  " << jackpot("@@C@@") << endl;
  cout << "is jackpot:  " << jackpot("@@@V@") << endl;
  cout << "is jackpot:  " << jackpot("    ") << endl;

  colorInvert(0,0,0);
  colorInvert(165,170,221);

  arrayOfMultiples(7,3);
}