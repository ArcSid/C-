#include <iostream>
#include <fstream>
using namespace std;

bool ardalinasi(int x,int y)
{
  if (x%y==y-1) return true;
  else return false;
}

int skaiciutikrinimas(long long int duomenys,long long int duomenys1)
{
  ofstream rez("skaiciai.txt");
  bool a = true;
  cout << duomenys << " " << duomenys1 << endl;
  for (int i = duomenys; i < duomenys1; i++)
    {
      for(int d = 2; d < 10; d++) {
        if (ardalinasi(i, d) == false) {
          a = false;
          break;
        }
      }

      if (a == true) {
        rez << i << endl;
      }

      a = true;
      
      // if (ardalinasi(i,2) 
      //   && ardalinasi(i,3) 
      //   && ardalinasi(i,4)
      //   && ardalinasi(i,5)
      //   && ardalinasi(i,6)
      //   && ardalinasi(i,7)
      //   && ardalinasi(i,8)
      //   && ardalinasi(i,9))
      // {
      //   rez << i << endl;
      // }
    }
  
  rez.close();
  return 420;
}

int main()
{
  fstream data("intervalas.txt");
  long long int duomenys,duomenys1;
  data >> duomenys;
  data >> duomenys1;
  skaiciutikrinimas(duomenys, duomenys1);
  data.close();
  return 0;
}