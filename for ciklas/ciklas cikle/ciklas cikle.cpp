#include <fstream>
#include <iostream>
using namespace std;
int main() {
  double n,sk, entry_Nr,sum,balalaika;
  string vardas;
  fstream info("begimo_duomenys.dat");
  info >> n;
  cout << "zmoniu kiekis:  " << n << endl;
  for (int i = 0; i < n; i++) {
    sum =0;
    info >> vardas;
    cout << "vardas: " << vardas << endl;
    info >> entry_Nr;
    for (int a=0;a<entry_Nr;a++)
      {
        info >> sk;
        info >> balalaika;
        cout << "uztruko: " << sk << " min ir "<<balalaika<<" sekundziu"<< endl;
        sk=sk+balalaika*(1/60);
        sum+=sk;
      }
    cout << "sitas zmogus vidurkiskai bega:  " << sum/entry_Nr << endl;
  }
}