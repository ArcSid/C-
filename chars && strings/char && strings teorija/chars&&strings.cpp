#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
using namespace std;
int main()
{
	fstream data1("nesuprantamas.txt");
    string str;
    string str1 = "&;";
    int slength,stringsize=0;
    while (getline(data1, str))
    {
        stringsize++;
    }
    str.clear();
    data1.close();
    fstream data("nesuprantamas.txt");
    for (int o = 0; o < stringsize; o++)
    {
      data >> str;
      // ===============
      slength=str.length();
      size_t found = str.find(str1);
      if (found != string::npos)
      // ===============
      {
          for (int i = 0; i < found; i++)
          {
              cout << str[i];
          }
          cout << "š";
          for (int i = found+2; i < slength; i++)
          {
              cout << str[i];
          }   
      }
      cout << endl;
    }
    return 0;
}