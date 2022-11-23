C++ basics:

| kintamuju tipai:
int (skaicius be kablelio)
double (skaicius su kableliu)
float (skaicius su kableliu)
char (simbolis)
string (tekstas)
bool (taip && ne)

| funkciju tipai:

int (grazina sveika skaiciu)
double (grazina skaiciu su kableliu)
char (grazina simboli)
string (grazina teksta)
bool (grazina taip && ne)
void (negrazina nieko)

|||pagrindines bibliotekos:|||

#include <iostream> (input output)
#include <cmath> (C programavimo kalbos matematika (sin,cos,tg,ctg,pow,sqrt ir taip toliau))
#include <string> (leidzia kurti string funkcijas ir kintamuosius)
#include <string.h> (leidzia kurti string funkcijas ir kintamuosius)
#include <iomanip> (input output manipuliacija (leidzia keistis input output reiksmes nekeiciant kintamojo))
#include <fstream> (leidzia atidaryti ir naudoti failus)
(daugiau darasysiu kai reikes)

| sintakse:
// <padeda komentara (kompiliatorius ignoruoja eilute)
nenaudojant "using namespace std;" kur reikes prirasyti reikia std::
int main() < pagrindine funkcija kurias pasibaigus baigiasi programa
funkcijas rasant VISADA reikia grazinti duomenis, nebent tai yra "void" funkcija kuri negrazina nieko, pvz: "return kintamasis;"
programos pabaigoje VISADA reikia uzdaryti faila, pvz failo funkcijos pavadinumas "data" tai int main() gale reikia parasyti "data.close()"
(daugiau darasysiu kai reikes)

| operatoriai:

tarkim yra kintamieji:
int a,b;
[+= operatorius, naudojamas: a+=b, tai reiskia a=a+b]
[-= operatorius, naudojamas: a-=b, tai reiskia a=a-b]
[/= operatorius, naudojamas: a/=b, tai reiskia a=a/b]
[*= operatorius, naudojamas: a*=b, tai reiskia a=a*b]
[!= operatorius, naudojamas: a!=b, tai reiskia a≠b]
[% operatorius, naudojamas: a%b, tai reiskia a/b=c]
[> operatorius, naudojamas: a>b]
[< operatorius, naudojamas: a<b]
[>= operatorius, naudojamas: a>=b]
[<= operatorius, naudojamas: a<=b]
[== operatorius, naudojamas: a==b, tai reiskia a=b]
[&& operatorius, naudojamas: a&&b, tai reiskia a ir b]
[<< operatorius, grazina output value]
[>> operatorius, grazina input value]
 
|||del pagalbos atidarykit issue per github.|||
