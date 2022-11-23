#include <iostream>
#include <string>

using namespace std;

// type f-name (args...)
// {
// Code code code ...
// }

// vienas()
// du_zodziai()

void sayhello(string input) {
  cout << input << "!," << endl;
}

void nextYear(int input) {
  cout << input+1 << endl;
}

// kiek_man_metu(vardas, gimimo metai, siandienos metai) -> print
// <vardas> yra <x> metu.
void kiek_man_metu(string name, int gimimo_metai, int siandienos_metai) {
  cout << name << " yra " << siandienos_metai-gimimo_metai << "."<< endl;
}

void trikampiukiekis(int n)
{
  if (n<3)
  {
    cout << "tokio daugiakampio nera" << endl;
    return;
  }
  
  cout << (n)*(n-1)*(n-2)/6 << endl;
}

int main() {
  string name = "vardas";
  int n = 2;
  sayhello(name);
  nextYear(2022);
  kiek_man_metu(name, 2002, 2022);
  trikampiukiekis(n);
  // Kiek trikampiu yra taisyklingame n-kampyje; (Jungiant n-kamio viršūnes)
  // 5-kampi
  // 5 * 4 * 3 / 6
  // 8-kampis
  // 8 * 7 * 6 / 6
  // 13-kampis
  // 13 * 12 * 11 / 6
}