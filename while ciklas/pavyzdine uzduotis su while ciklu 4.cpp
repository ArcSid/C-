#include <iostream>
using namespace std;

int main() {
    int m, n;
    cout << "iveskite m ir n:" << endl;
    cin >> m >> n;

    while (m != n) { 
        if (m > n) {
            m -= n;
        }
        else {
            n -= m;
        }
    }
    cout << "skaiciaus didziausias bendras daliklis: " << m << endl;
    return 0;
}