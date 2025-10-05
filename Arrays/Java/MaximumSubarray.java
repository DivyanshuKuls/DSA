/* Maximum Subarray sum problem using Kadane's Algorithm 
Given an integer array arr[], find the subarray (containing at least one element) which has the maximum possible sum, and return that sum.
Note: A subarray is a continuous part of an array.

Input: arr[] = [2, 3, -8, 7, -1, 2, 3]
Output: 11
Explanation: The subarray [7, -1, 2, 3] has the largest sum 11.
*/

import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

class MaximumSubarray {

    static int maxSubarraySumOnly (int[] arr) {
        int res = arr[0];

        int maxEnding = arr[0];

        for (int i = 1; i < arr.length ; i++) {
            maxEnding = Math.max(maxEnding + arr[i], arr[i]);

            res = Math.max(res, maxEnding);
        }

        return res;

    }

    static List<Integer> maxSumSubarray(int[] arr) {
        int resStart = 0, resEnd = 0;
        int currStart = 0;

        int maxSum = arr[0];
        int maxEnding = arr[0];

        for (int i = 0; i<arr.length; i++) {
            if(maxEnding+arr[i] < arr[i]) {
                currStart = i;
                maxEnding = arr[i];
            } else {
                maxEnding += arr[i];  
            }

            if(maxEnding > maxSum) {
                maxSum = maxEnding;
                resStart = currStart;
                resEnd = i;
            }
            
        }

        List<Integer> res = new ArrayList<>();
        for(int i = resStart; i<= resEnd; i++) {
            res.add(arr[i]);
        }
        return res;
    }

    public static void main (String[] args) {
        System.out.println("Maximum Subarray problem using Kadane's Algorithm");

        int[] arr = {2, 3, -8, 7, -1, 2, 3};

        List<Integer> subArray = maxSumSubarray(arr);
        System.out.println("Max Sum Subarray: " + subArray);

        System.out.println("Max Sum Only: " + maxSubarraySumOnly(arr));
    }
}