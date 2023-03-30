/*
todo:Given an array of integers, the task is to find the maximum subarray sum possible of all the non-empty subarrays.
?Input     : [-3, -4, 5, -1, 2, -4, 6, -1]
?Output     : 8
!Explanation: Subarray [5, -1, 2, -4, 6] is the max sum contiguous subarray with sum 8.

?Input      : [-2, 3, -1, 2]
?Output     : 4
!Explanation: Subarray [3, -1, 2] is the max sum contiguous subarray with sum 4.
*/

#include <algorithm>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int maximumSubarraySum(vector < int > arr) {
  int n = arr.size();
  int maxSum = INT_MIN;

  for (int i = 0; i <= n - 1; i++) {
    int currSum = 0;
    for (int j = i; j <= n - 1; j++) {
      currSum += arr[j];
      if (currSum > maxSum) {
        maxSum = currSum;
      }
    }
  }

  return maxSum;
}
int main() {
    // Your code goes here;
    vector<int> a = {1, 3, 8, -2, 6, -8, 5};
    cout << maximumSubarraySum(a) << endl;
    return 0;
}