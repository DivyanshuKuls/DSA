/*
    print pattern like below
    1
    2 3
    4 5 6
    7 8 9 10
*/
# include<iostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int row =1;
    int count = 1;
    while(row<=n) {
        int col =1;
        while(col<=row) {
            cout << count << " ";
            count++;
            col++;
        }
        cout << endl;
        row++;
    }
}

/*
    Let n = 4;
    1st iteration:
    row = 1
    count = 1
    is row=1 <= n=4? yes
    col = 1
    is col = 1 <= row=1 ? yes
    print the value of count i.e 1 (So it will print 1 one time)
    increase count and col value  by 1
    print endline
    now increase row value by 1

    Output:
    1 

    2nd Iteration:
    n= 4
    row = 2
    count = 2
    is row=2 <= n=4 ? yes
        col = 1
        is col = 1 <= row=2 ? yes
            print the value of count i.e, 2
            increase count and col value by 1
            now col = 2, count = 3
        is col =2 <= row=2 ? yes
            print the value of count i.e, 3
            increase count and col value by 1
            now col = 3, count = 4
        is col=3 <= row=2 ? no
            exit from the inner while loop        
    print the endline
    now increase row value by 1
    Output:
    1 
    2 3

    3rd iteration:
    n = 4
    count = 4
    row = 3
    is row=3 <= n=4 ? yes
        col = 1
        is col=1 <= row=3 ? yes
            print the value of count i.e, 4
            increase the value of col and count by 1
            now col=2, count=5
        is col=2 <= row=3 ? yes
            print the value of count, i.e 5
            increase the value of col and count by 1
            now col=3, count=6
        is col=3 <= row=3? yes
            print the value of count, i.e 6
            increase the value of col and count by 1
            now col=4, count=7
        is col=4 <= row=3? no
            exit the inner while loop
    print the endline
    increase the value of row by 1

    Output:
    1 
    2 3
    4 5 6

    4th Iteration:
    n=4
    count = 7
    row=4
    is row=4 <= n=4 ? yes
        col = 1
        is col=1 <= row=4 ? yes
            print the value of count, i.e 7
            increase the value of count and col by 1
            now col = 2, count = 8
        is col=2 <= row=4 ? yes
            print the value of count, i.e 8
            increase the value of count and col by 1
            now col=3, count=9
        is col=3 <= row=4 ? yes
            print the value of count, i.e 9
            increase the value of col and count by 1
            now col =4 , count=10
        is col=4 <= row=4 ? yes
            print the value of count, i.e 10
            increase the value of col and count by 1
            now col=5 and count =11
        is col=5 <= row=4 ?  no
            exit the inner while loop
    print the endline
    increase the value of row by 1

    is row=5 <= n=4 ? no
        exit the outer while loop and terminate the main function
    
    Output:
    1
    2 3
    4 5 6
    7 8 9 10
*/  