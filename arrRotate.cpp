#include <iostream>
using namespace std;

  // todo: reverse the given array by k steps, where k is a non-negative number, and can be greater the size of arary.

int main()
{
      // Define the array of integers and initialize it with some values
    int arr[] = {1, 2, 3, 4, 5};
    int k;
    cout << "Enter the number of steps: ";
    cin >> k;
    int n = sizeof(arr) / sizeof(arr[0]);

    // Calculate the effective number of steps to rotate the array by
    k = k % n;  // k can be greater than n;

    // Create a new array to store the rotated elements
    int finalArr[n];

    // Initialize a counter variable to keep track of the number of elements added to the final array
    int j = 0;

    // Loop through the elements in the original array that need to be moved to the end of the new array
    for (int i = n - k; i < n; i++)
    {
        // Add the current element to the end of the new array
        finalArr[j++] = arr[i];
    }

    // Loop through the remaining elements in the original array
    for (int i = 0; i <= k; i++)
    {
        // Add the current element to the end of the new array
        finalArr[j++] = arr[i];
    }

    // Loop through the elements in the new array and print them
    for (int i = 0; i < n; i++)
    {
        cout << finalArr[i] << " ";
    }

    // Print a new line character to separate the output from the command prompt
    cout << endl;

    // Return 0 to indicate successful execution of the program
    return 0;
}

    /*
  ??The code accepts an integer array "arr" consisting of 5 elements (1, 2, 3, 4, 5). The user is prompted to enter the number of steps "k" by which the array has to be rotated. The size of the array is calculated and stored in the integer variable "n". The value of "k" is modified such that it is less than "n". An integer array "finalArr" of size "n" is declared. During the first for loop, the last "k" elements of the "arr" array are stored in the "finalArr" array starting from index 0. During the second for loop, the remaining elements of the "arr" array are stored in the "finalArr" array starting from "j" until "k". Finally, the "finalArr" array is printed.

*/