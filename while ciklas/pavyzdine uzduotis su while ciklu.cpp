#include <iostream>
using namespace std;

int main() {
    int sk, originalsk, likutis, resultat = 0;
    cout << "iveskite trizenkli skaiciu: " << endl;
    cin >> sk;
    originalsk = sk;

    while (originalsk != 0) {
        likutis = originalsk % 10;
        resultat += likutis * likutis * likutis;
        originalsk /= 10;
    }

    if (resultat == sk)
        cout << sk << " is Armstrong number";
    else
        cout << sk << " is not Armstrong number";

    return 0;
  //galimai nukopijavau dali is google sitos uzduoties 
}