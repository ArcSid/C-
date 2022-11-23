#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main ()
{
    int dg,dl,su,a;
    double d,g,h,s;
    double skaicius;
    double skaicius2;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << " iveskite pirma skaiciu:  " << endl;
    cin >> skaicius;
    cout << "=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=" << endl;
    cout << " iveskite antra skaiciu:  " << endl;
    cin >> skaicius2;
    cout << "=================================" << endl;
    dg=skaicius2*skaicius;
    dl=skaicius/skaicius2;
    su=skaicius2+skaicius;
    a=skaicius-skaicius2;
    cout << "intiger" << endl;
    cout << "=================================" << endl;
    cout << "daugyba=  " << dg <<endl;
    cout << "dalyba=  " << dl << endl;
    cout << "sudetis=  " << su << endl;
    cout << "atimtis=  " << a << endl;
    cout << "=================================" << endl;
    d=skaicius2*skaicius;
    g=skaicius/skaicius2;
    h=skaicius2+skaicius;
    s=skaicius-skaicius2;
    cout << "decimal" << endl;
    cout << "=================================" << endl;
    cout << "daugyba=  " << d << endl;
    cout << "dalyba=  " << g << endl;
    cout << "sudetis=  " << h << endl;
    cout << "atimtis=  " << s<< endl;
    cout << "=================================" << endl;
    return 0;
}
