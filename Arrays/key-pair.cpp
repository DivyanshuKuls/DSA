/*
There is an array of integers and targetted sum where we need to return true if pairs are present in array 
whose sum is equal to given targetted sum
ex: arr[6] = [4, 6, 10, 21, 45, 7]
targetted sum = 16
so arr[1] + arr[10] = 16, so the function should return true.
*/

#include<iostream>
#include<algorithm>

using namespace std;

/* 
    Method 1 (Using Two for loops)
    Time Complexity = O(N^2)
    It is not a better solution
*/


bool twoSum(int arr[], int arraySize, int targettedSum) {
    for(int i=0; i<arraySize; ++i) {
        for(int j=i+1; j<arraySize; j++){
            if(arr[i] + arr[j] == targettedSum)
                return true;
        }
    }
    return false;

};


/* 
    Method 2 (Two Pointer Approach for sorted array in ascending order)
    Time Complexity = O(NlogN) + O(N) = O(NlogN)
    where O(NlogN) is the time complexity of sort function in stl and O(N) is the time complexity of twoSum2PointerApproach 
    func
    It is the efficient solution
*/

bool twoSum2PointerApproach(int arr[], int arraySize, int targettedSum) {
    int low = 0;
    int high = arraySize-1;

    while (low < high) {
        int currentSum = arr[low] + arr[high];
        if(currentSum == targettedSum) {
            return true;
        } else if (currentSum > targettedSum) {
            high--;
        } else {
            low++;
        }
    }
    return false;
}

int main() {
    int arr[6] = {45, 67, 76, 43, 10, 6};
    int arraySize = 6;
    int targettedSum = 16;

    // Time Complextity of sort function is O(NlogN)
    sort(arr, arr+arraySize);
    bool result = twoSum2PointerApproach(arr, arraySize, targettedSum);
    cout << result << endl;
};