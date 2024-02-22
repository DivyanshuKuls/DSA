/*
    print the pattern like below:
    1
    2 1
    3 2 1
    4 3 2 1
*/

/*
    Dry run
    we'll handle the row with outer while loop
    for handling column we'll have inner while loop

    if n= 2
    while(row<=n) {
        col = 1
        while(col<=row) {
            print the value of (row-col+1)
            increase the value of col by 1
        }
        print endline
        increase the value of row by 1
    }
*/

#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int row = 1;
    while (row<=n) {
        int col = 1;
        while(col <= row) {
            cout << row-col+1;
            col++;
        }
        cout << endl;
        row++;
    }
}