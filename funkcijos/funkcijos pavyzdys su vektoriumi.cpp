#include <vector>
#include <string>
#include <iostream>
using namespace std;

std::vector<int> arrayOfMultiples(int num, int length) {
	std::vector<int> res;
	for (int i=1; i<=length; i++) {
		res.push_back(i*num);
	}
	return res;
}

string rps(string s1, string s2) {
	if (s1==s2)
		return "TIE";
	if (s1=="rock"&&s2=="paper")
	{
		return "Player 2 wins";
	}
	if (s1=="rock"&&s2=="scissors")
	{
		return "Player 1 wins";
	}
	if (s1=="paper"&&s2=="rock")
	{
		return "Player 1 wins";
	}
	if (s1=="paper"&&s2=="scissors")
	{
		return "Player 2 wins";
	}
	if (s1=="scissors"&&s2=="rock")
	{
		return "Player 2 wins";
	}
	if (s1=="scissors"&&s2=="paper")
	{
		return "Player 1 wins";
	}
}

int main()
{
  arrayOfMultiples(2,5);
  vector<int> a = arrayOfMultiples(76,4);
  
  for (int i = 0;i<5;i++)
    {
      cout << a[i] << endl;
    }
  
}
