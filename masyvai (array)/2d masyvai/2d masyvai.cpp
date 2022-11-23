#include <fstream>
#include <iostream>
using namespace std;
int main() {
  ifstream info("duomenys.txt");
  int sum = 0, masyvas[70];
  int lenta[8][8];
  char raide[10]{'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
  for (int e = 0; e < 8; e++) {
    for (int s = 0; s < 8; s++) {
      info >> lenta[e][s];
      if (lenta[e][s] == 1) {
        cout << raide[s] << e + 1 << " → ";
        // cout << raide[s] << e + 1 << " ";
        // cout << raide[s-1] << e + 1 << " ";
        // cout << raide[s+1] << e + 1 << " ";

        if (lenta[e+1][s+1] != 0) {
          cout << raide[s+1] << e+1 + 1 << " ";
        }
        if (lenta[e+1][s-1] != 0) {
          cout << raide[s-1] << e+1 + 1 << " ";
        }
        
        cout << endl;
      }
    }
  }


      // if (lenta[e][s] == 2) {
      //   cout << raide[s] << e + 1 << endl;
      // }
  // for (int i = 0;i<64;i++)
  //   {
  //     info >> lenta[i/8][i%8];
  //     if(lenta[i/8][i%8] == 7)
  //     {
  //       cout << i << " ( " << i/8 + 1 << "; " << i%8 + 1 << " ) " << endl;
  //       cout << i << " ( " << i/8 << "; " << i%8 << " ) " << endl;
  //     }
  //   }
  // cout << "ant lentos yra:  " << sum << "  sachmatu" << endl;
}
// ♚ ♟ ♞ ♛ ♜ ♝
/*
  Šachmatų lenta, joje yra kažkokios figūros:
  | A B C D E F G H
  | 1 2 3 4 5 6 7 8
--|-----------------
 1| 1 1 0 0 0 1 0 1
 2| 0 0 0 0 0 1 0 1
 3| 0 0 0 1 0 0 0 0
 4| 1 1 0 0 0 1 0 1
 5| 0 0 0 0 0 1 0 1
 6| 0 7 0 1 0 0 0 0
 7| 0 0 0 0 0 1 0 1
 8| 1 1 1 1 0 0 0 0
*/