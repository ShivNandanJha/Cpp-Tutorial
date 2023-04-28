/**
 * The function performs binary search to find the first and last occurrence of a target element in a
 * given vector and returns the result as a vector.
 *
 * @param nums A reference to a vector of integers that represents the input array.
 * @param target The value of the element we are searching for in the input array.
 *
 * @return The function `searchRange` returns a vector of integers representing the first and last
 * occurrence of the target element in the input vector. If the target element is not found, the
 * function returns a vector containing -1,-1.
 */
#include <iostream>
#include <vector>
using namespace std;
#include <ctime>

  // todo: Given an array of integers 'arr' that is sorted in ascending order. Find the first and last occurence of a target element from the array. IF tarfet is not found ,return [-1,-1]


vector<int> searchRange(vector<int> &nums, int target)
{
    // Initialize variables to hold the first and last occurrence of the target
    int first = -1, last = -1;

    // Perform binary search to find the first occurrence of the target
    int low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            first = mid;    // Update the first occurrence
            high = mid - 1; // Look for target in the left half
        }
        else if (nums[mid] < target)
        {
            low = mid + 1; // Look for target in the right half
        }
        else
        {
            high = mid - 1; // Look for target in the left half
        }
    }

    // Perform binary search to find the last occurrence of the target
    low = 0, high = nums.size() - 1;
    while (low <= high)
    {
        /* This code is performing binary search to find the first and last occurrence of a target
      element in a given vector. */
        int mid = (low + high) / 2;
        if (nums[mid] == target)
        {
            last = mid;    // Update the last occurrence
            low = mid + 1; // Look for target in the right half
        }
        else if (nums[mid] < target)
        {
            low = mid + 1; // Look for target in the right half
        }
        else
        {
            high = mid - 1; // Look for target in the left half
        }
    }

    // Return the result as a vector
    if (first == -1)
    {
        return vector<int>{-1, -1}; // Target not found
    }
    else
    {
        return vector<int>{first, last};
    }
}

int main()
{
    clock_t start_time = clock(); // start the clock

    int n;
    cout << "Enter number of elements of array : ";
    cin >> n;
    cout << "enter element: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << " Enter Target Element: \n";
    cin >> target;
    cout << "________________________ \n"
         << "The input Array is: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    vector<int> result = searchRange(arr, target);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl;
    // Expected output: [3, 5]
    clock_t end_time = clock();                                         // end the clock
    double time_taken = double(end_time - start_time) / CLOCKS_PER_SEC; // calculate the time taken

    cout << "Time taken by the program is " << time_taken << " seconds." << endl;

    return 0;
}
