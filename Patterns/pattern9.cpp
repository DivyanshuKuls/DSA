/*
    print the pattern like below:
    1
    2 3
    3 4 5
    4 5 6 7
*/

/*
    Dry Run for n=2
    initial value of each row is always the value of row
    let row =1
    is row=1 <= n=2? yes
        col = 1
        let count = row
        print count
        increase count and col by 1
    print the endline
    increase the row value by 1

    2nd Iteration:
    Now row = 2 and n =2
    is row=2 <= n=2 ? yes
        col=1
        let count = row, i.e 2
        is col=1 <= row=2 ? yes
            print count, i.e 2
            increase count and col by 1
            now count=3, col=2
        is col=2 <= row=2 ? yes
            print count i.e 3
            increase count and col by 1
            now count=4 and col=3
        is col=3 <= row=2 ? no
            exit the inner while loop  
    print the endline
    increase the value of row by 1
    is row=3 <= n=2 ? no
        exit the outer while loop

    Output:
    1
    2 3  

    Method 2: Without using variable value
    initialize with col=0
    print value = col+row
*/
#include <iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int row = 1;
    // while(row<=n) {
    //     int col = 1;
    //     int count = row;
    //     while(col<row) {
    //         cout << count;
    //         cout << col+row;
    //         col++;
    //         count++;
    //     }
    //     cout << endl;
    //     row++;
    // }

// Method 2:
    while(row<=n) {
        int col = 0;
        while(col<row) {
            cout << col+row;
            col++;
        }
        cout << endl;
        row++;
    }
}