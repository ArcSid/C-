#include <iostream>
#include <cmath>
using namespace std;

int main() {
  char raides[4] = {'a','b','c','d'};
  // 3-čia raidė
  cout << raides[2] << endl;
  // pakeičiam 2 raidę į H
  raides[1] = 'H';
  cout << raides[1] << endl;

  int reiksmes[3] = {0};
  reiksmes[0] = 45;
  reiksmes[1] = 49;
  reiksmes[2] = 56;
  cout << reiksmes[1] << endl;


  // Šiandienos temperatūra PROGNOZĖ:
  // 19 23 28 30 30 24  laipsnių
  // Šiandienos temperatūra REALI:
  // 18 24 28 32 30 20  laipsnių
  int temperatura[6] = {19,23,28,30,30,24};
  int realitemp[6]={18,24,28,32,30,20};
  cout << "prognoze:  " << temperatura[0] << " reali temperatura:  " << realitemp[0] << endl;
  for (int i = 0; i < 6; i++) {
    cout << i << " h prognoze:  " << temperatura[i] << " reali temperatura:  " << realitemp[i] << endl;
    cout << i << " h suklydo:  " <<abs(temperatura[i] - realitemp[i])<< endl;
    
  } 
}

void intro() {
  int a = 3;
  int A[4] = {10, 2, 30, 4};
  cout << A[0] << endl;
  cout << A[1] << endl;
  cout << A[2] << endl;
  cout << A[3] << endl;
  
  cout << endl << endl;
  
  string str = "Hello";
  char Str[5] = {'H', 'e', 'l', 'l', 'o'};

  // cout << A << endl;
  for (int i = 0; i < 4; i++) {
    cout << i << ". " << A[i] << endl;
  }
}
