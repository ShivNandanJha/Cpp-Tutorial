#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
*You are given an m x n integer matrix matrix with the following two properties:
*Each row is sorted in non-decreasing order.
*The first integer of each row is greater than the last integer of the previous row.

todo:Given an integer target, return true if target is in matrix or false otherwise.

! You must write a solution in O(log(m * n)) time complexity.
*/

bool searchMatrix (vector<vector<int>> &arr, int target){
    int n = arr.size();  // n0. of rows
    if(n==0){
        return 0;
    }
    int m = arr[0].size();  // no. of cols

    int low  = 0;
    int high = n * m - 1;
    while(low<=high){
        int mid = low + (high - low) / 2;
        int x   = mid / n;                 // x-coordinate of the mid element 
        int y   = mid % m;                 // y-coordinate of the mid element
        
        if( arr[x][y]==target){
            return true;
        }
        else if( arr[x][y]< target){
            low = mid + 1;
        }
        else{
            high = mid-1;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> arr    = {{1, 3, 5, 7}, {10, 11, 16, 20}, {23, 30, 34, 60}};
    int                 target = 8;
    cout << searchMatrix(arr, target);
    return 0;

    return 0;
}