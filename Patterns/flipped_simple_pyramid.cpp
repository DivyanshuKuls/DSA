/* 
    Print Flipped Simple Pyramid
            *      r0 - 1* - c5
          * *      r1 - 2* - c4
        * * *      r3 - 3* - c3
      * * * *      r4 - 4* - c2
    * * * * *      r5 - 5* - c1
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

//Method 1
    // for (int row=0; row<n; row++){
    //     for(int space = n-row-1; space>0; space--){
    //         cout << "  "; // 2 spaces are given 
    //     }
    //     for(int col=0; col<=row; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
//Method 2:
      for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (col < n - row - 1) {
                cout << "  "; // Print spaces for left alignment
            } else {
                cout << "* "; // Print stars
            }
        }
        cout << endl;
    }
}


