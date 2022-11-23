#include <fstream>
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  double paz1, paz2, paz3, paz4, paz5;
  double vidurkis;
  ifstream failas("pazymiai.txt");
  ofstream rez("REZ.txt");
  
  for (int i = 1; i <= 5; i++) {

    failas >> paz1;
    failas >> paz2;
    failas >> paz3;
    failas >> paz4;
    failas >> paz5;
    rez << fixed << setprecision(2) << (paz1 + paz2 + paz3 + paz4 + paz5) / 5 << endl;
  }
}