#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
  int sk,a,b,c,sum=0,taskai;
  char d,top;
  fstream data("data.txt");
  data >> sk;
  
  for (int i=0; i<sk; i++)
    {
      data >> d >> a >> b >> c >> taskai;
      sum+=taskai;
      if (pow(a, b)!=c)
      {
        cout << "mokinys:  " << d <<" yra durnas" << endl;
        // cout << a << " ^ " << b << " ≠ " << c << endl;
      }
      else
      {
        cout << "mokinio kodas: " << d << endl;
        // cout << a << " ^ " << b << " = " << c << endl;
      }
    }
  
  cout << "vidurkis: " << sum/sk << endl;
  int vidurkis = sum/sk;

  data.close(); // Uždarom failą
  fstream data1("data.txt"); // Vel tą patį atidarom, tik su kitu kintamuoju
  data1 >> sk;
  
  for (int i=0; i<sk; i++)
    {
      data1 >> d >> a >> b >> c >> taskai;
      if (taskai>=vidurkis)
      {
        cout << "mokinys " << d << " baisiai krutas mocnas vyras" << endl;
      }
    }
  data1.close();
}