#include <iostream>
#include <vector>
using namespace std;

// todo: write a  program that finds the index of the minimum element in a rotated sorted array
// todo: also write a  program that gives the output value of  minimum element in a rotated sorted array
//? https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

int findMinIndex(vector<int> &nums) // function definition that takes in a reference to a vector of integers
{
    int low = 0, high = nums.size() - 1; // initialize left and right pointers
    if (nums.size() == 1)                // edge case: if there is only one element in the array
    {
        return nums[0]; // return the only element
    }
    if (nums[low] < nums[high]) // edge case: if the array is already sorted
    {
        return low; // return the index of the first element
    }
    while (low <= high) // binary search algorithm
    {
        int mid = low + (high - low) / 2; // find the middle index of the array
        if (nums[mid] > nums[mid + 1])    // if the element at mid is greater than the one at mid+1
        {
            return mid + 1; // mid+1 is the index of the minimum element
        }
        if (nums[mid] < nums[mid - 1]) // if the element at mid is less than the one at mid-1
        {
            return mid; // mid is the index of the minimum element
        }
        if (nums[mid] > nums[low]) // if the left half of the array is sorted
        {
            low = mid + 1; // search in the right half of the array
        }
        else // if the right half of the array is sorted
        {
            high = mid - 1; // search in the left half of the array
        }
    }
    return -1; // if the array is not rotated, return -1
}

int findMinValue(vector<int> &nums)
{
    int n = nums.size();
    int left = 0, right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;
        if (nums[mid] > nums[right])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return nums[left];
}

int main()
{
    vector<int> nums = {4, 5, 6, 0, 1, 2, 3};                                     // example rotated sorted array
    int min_element_index = findMinIndex(nums);                                   // find the minimum element indexx
    int min_element_value = findMinValue(nums);                                   // find the minimum value
    cout << "The index of the minimum element is: " << min_element_index << endl; // print the index of minimum element
    cout << "The value of the minimum element is: " << min_element_value << endl; // print the value of minimum element
    return 0;
}
