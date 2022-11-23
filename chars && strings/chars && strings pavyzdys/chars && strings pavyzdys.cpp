#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

int main()
{
  fstream data1("duomenys.txt");
  string str,completestring;
  
  while (getline(data1, str))
    {
      for (int b=0; b < str.length()-1; b++)
        {
          if (str[b]=='&' && str[b+1]==';')
          {
            for (int i = 0;i<b;i++)
              {
                completestring += str[i];
              }
            completestring += "š";
            // cout << str.length() << " " << b << endl;

            for (int i = b+2; i<str.length(); i++)
              {
                completestring += str[i];
              }
          }
        }

      cout << completestring << endl;
      completestring.clear();
    }
  
      data1.close();
      return 0;
}