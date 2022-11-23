#include <fstream>
#include <iostream>

using namespace std;

int main() {
  string user_id;
  int n;
  double score, sum;               // Sukuria kintamajį n
  ifstream failas("duomenys.txt"); // Atidaro failą

  failas >> user_id;
  cout << "User ID: " << user_id << endl;

  failas >> n;
  cout << "Žaista dienų: " << n << endl;

  for (int i = 0; i < n; i++) {
    failas >> score; // perskaito skaičių iš failo į kintamajį a
    cout << score << endl;
  }
  failas.close(); //uzdaro faila
}