#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given an array 'a' of length greater then 3 , return the index 'i' such that arr[0]<arr[1]<...<arr[i-1]<arr[i]>arr[i+1]>....>arr[arr.length-1]
//? https://leetcode.com/problems/peak-index-in-a-mountain-array/

// todo:Given a 0 - indexed integer array nums, find a peak element, and return its index.If the array contains multiple peaks, return the index to any of the peaks.
//* You may imagine that nums[-1] = nums[n] = -∞.In other words,
//? https://leetcode.com/problems/find-peak-element/

int peakIndexInMountainArray(vector<int> &arr)
{
    // Set left pointer to the beginning of the array
    int left = 0;
    // Set right pointer to the end of the array
    int right = arr.size() - 1;
    // Loop until left and right pointers meet
    while (left < right)
    {
        // Calculate the middle index
        int mid = left + (right - left) / 2;
        // If the value at mid is less than the value at mid+1, then the peak must be to the right of mid
        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1; // Move left pointer to mid+1
        }
        else
        {
            right = mid; // Otherwise, move right pointer to mid
        }
    }
    // Return the left pointer, which should be pointing to the peak index
    return left;
}

int main()
{
    vector<int> arr = {0, 1, 2, 3, 4, 2, 1, 0};
    cout << peakIndexInMountainArray(arr) << endl;

    return 0;
}