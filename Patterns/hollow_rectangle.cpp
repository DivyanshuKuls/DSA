#include<iostream>
using namespace std;

int main () {
    int length, width;
    cout << "Enter length of rectangle: ";
    cin >> length;

    cout << "Enter the width of rectangle: ";
    cin >> width;

    // outer loop
    for(int row=0; row<length; row++) {
        //inner loop
        for(int col=0; col<width; col++) {
            if(row==0 || row==length-1 || col==0 || col==width-1){
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}