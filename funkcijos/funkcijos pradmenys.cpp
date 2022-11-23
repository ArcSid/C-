#include <iostream>
using namespace std;

void sakyk_labas(string vardas, int amzius) {
  int a;
  cout << "************" << " Labas " << vardas << " ************ \n";
  cout << "Amzius " << amzius << endl;
  // cin >> a;
  cout << "***************** \n";
  // cout << "a = " << a << endl;
  //Nieko negrazina
}

string zodis() {
  return "Mano zodis";
}

int random_veiksmai(int x) {
  return 10*x*x + 7*x - 12;
}

int main() // Funkcija
{
  int mano_skaicius = 10;
  cout << mano_skaicius << endl;
  
  mano_skaicius = random_veiksmai(40);
  cout << mano_skaicius << endl;
  
  mano_skaicius = random_veiksmai(1);
  cout << mano_skaicius << endl;
  
    sakyk_labas("Rokas", 13);
    sakyk_labas("Jurga", 17);
  return 0;
}