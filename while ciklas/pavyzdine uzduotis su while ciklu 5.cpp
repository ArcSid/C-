#include <iostream>
using namespace std;
int main() {
    int n, apv_sk = 0, likutis;
    cout << "iveskite skaiciu:  ";
    cin >> n;
    while (n != 0) {
        likutis = n % 10;
        apv_sk = apv_sk * 10 + likutis;
        n = n / 10;
    }
    cout << "atvisktinis skaicius: " << apv_sk;
    return 0;
}