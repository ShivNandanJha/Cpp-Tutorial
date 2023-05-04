<<<<<<< HEAD
// C++ program to split an array into Two
// equal sum subarrays
#include <bits/stdc++.h>
using namespace std;

// todo:Given an array of integers greater than zero, find if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays is the same. Print the two subarrays.
//!! This function finds the split point in an array where the sum of the left subarray
//!!  and the sum of the right subarray are equal.
// !! If it's not possible to split the array into two parts, it returns -1.

int findSplitPoint(int arr[], int n) // function definition taking an array and its size as input
{
    int leftSum = 0; // Initialize leftSum to 0.

    // Traverse array elements
    for (int i = 0; i < n; i++) // Loop through each element of the array
    {
        leftSum += arr[i]; // Add current element to leftSum.

        // Find sum of rest array elements (rightSum)
        int rightSum = 0;               // Initialize rightSum to 0.
        for (int j = i + 1; j < n; j++) // Loop through the remaining elements of the array.
            rightSum += arr[j];         // Add each remaining element to rightSum.

        // Check if we have found the split point where leftSum and rightSum are equal.
        if (leftSum == rightSum)
            return i + 1; // Return the split point index.
    }

    // If it is not possible to split array into two parts.
    return -1; // Return -1 to indicate that it's not possible to split the array.
}

// This function prints the two parts of the array after finding the split point using the above function.

void printTwoParts(int arr[], int n) // function definition taking an array and its size as input
{
    int splitPoint = findSplitPoint(arr, n); // Call findSplitPoint function to find the split point.

    if (splitPoint == -1 || splitPoint == n) // Check if it's not possible to split the array or if the split point is the last element.
    {
        cout << "Not Possible" << endl; // If so, print "Not Possible".
        return;                         // Return from the function.
    }
    for (int i = 0; i < n; i++) // Loop through each element of the array.
    {
        if (splitPoint == i)   // Check if we have reached the split point.
            cout << endl;      // If so, print a newline character to separate the two parts of the array.
        cout << arr[i] << " "; // Print the current element of the array.
    }
}

// Driver program
int main() // main function
{
    int arr[] = {1, 2, 3, 4, 5, 5};       // Initialize an array.
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array.
    printTwoParts(arr, n);                // Call printTwoParts function to print the two parts of the array.
    return 0;                             // Return from the program.
}

/*
!!An Efficient solution is to first compute the sum of the whole array from left to right. Now we traverse array from right and keep track of right sum, left sum can be computed by subtracting current element from whole sum.
* Below is the implementation of above idea.
*/
// / Returns split point. If not possible, then
// // return -1.
// int findSplitPoint(int arr[], int n)
// {
//     // traverse array element and compute sum
//     // of whole array
//     int leftSum = 0;
//     for (int i = 0 ; i < n ; i++)
//         leftSum += arr[i];

//     // again traverse array and compute right sum
//     // and also check left_sum equal to right
//     // sum or not
//     int rightSum = 0;
//     for (int i=n-1; i >= 0; i--)
//     {
//         // add current element to right_sum
//         rightSum += arr[i];

//         // exclude current element to the left_sum
//         leftSum -=  arr[i] ;

//         if (rightSum == leftSum)
//             return i ;
//     }

//     // if it is not possible to split array
//     // into two parts.
//     return -1;
// }

// // Prints two parts after finding split point using
// // findSplitPoint()
// void printTwoParts(int arr[], int n)
// {
//     int splitPoint = findSplitPoint(arr, n);

//     if (splitPoint == -1 || splitPoint == n )
//     {
//         cout << "Not Possible" <<endl;
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(splitPoint == i)
//             cout << endl;
//         cout << arr[i] << " " ;
//     }
=======
// C++ program to split an array into Two
// equal sum subarrays
#include <bits/stdc++.h>
using namespace std;

// todo:Given an array of integers greater than zero, find if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays is the same. Print the two subarrays.
//!! This function finds the split point in an array where the sum of the left subarray
//!!  and the sum of the right subarray are equal.
// !! If it's not possible to split the array into two parts, it returns -1.

int findSplitPoint(int arr[], int n) // function definition taking an array and its size as input
{
    int leftSum = 0; // Initialize leftSum to 0.

    // Traverse array elements
    for (int i = 0; i < n; i++) // Loop through each element of the array
    {
        leftSum += arr[i]; // Add current element to leftSum.

        // Find sum of rest array elements (rightSum)
        int rightSum = 0;               // Initialize rightSum to 0.
        for (int j = i + 1; j < n; j++) // Loop through the remaining elements of the array.
            rightSum += arr[j];         // Add each remaining element to rightSum.

        // Check if we have found the split point where leftSum and rightSum are equal.
        if (leftSum == rightSum)
            return i + 1; // Return the split point index.
    }

    // If it is not possible to split array into two parts.
    return -1; // Return -1 to indicate that it's not possible to split the array.
}

// This function prints the two parts of the array after finding the split point using the above function.

void printTwoParts(int arr[], int n) // function definition taking an array and its size as input
{
    int splitPoint = findSplitPoint(arr, n); // Call findSplitPoint function to find the split point.

    if (splitPoint == -1 || splitPoint == n) // Check if it's not possible to split the array or if the split point is the last element.
    {
        cout << "Not Possible" << endl; // If so, print "Not Possible".
        return;                         // Return from the function.
    }
    for (int i = 0; i < n; i++) // Loop through each element of the array.
    {
        if (splitPoint == i)   // Check if we have reached the split point.
            cout << endl;      // If so, print a newline character to separate the two parts of the array.
        cout << arr[i] << " "; // Print the current element of the array.
    }
}

// Driver program
int main() // main function
{
    int arr[] = {1, 2, 3, 4, 5, 5};       // Initialize an array.
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array.
    printTwoParts(arr, n);                // Call printTwoParts function to print the two parts of the array.
    return 0;                             // Return from the program.
}

/*
!!An Efficient solution is to first compute the sum of the whole array from left to right. Now we traverse array from right and keep track of right sum, left sum can be computed by subtracting current element from whole sum.
* Below is the implementation of above idea.
*/
// / Returns split point. If not possible, then
// // return -1.
// int findSplitPoint(int arr[], int n)
// {
//     // traverse array element and compute sum
//     // of whole array
//     int leftSum = 0;
//     for (int i = 0 ; i < n ; i++)
//         leftSum += arr[i];

//     // again traverse array and compute right sum
//     // and also check left_sum equal to right
//     // sum or not
//     int rightSum = 0;
//     for (int i=n-1; i >= 0; i--)
//     {
//         // add current element to right_sum
//         rightSum += arr[i];

//         // exclude current element to the left_sum
//         leftSum -=  arr[i] ;

//         if (rightSum == leftSum)
//             return i ;
//     }

//     // if it is not possible to split array
//     // into two parts.
//     return -1;
// }

// // Prints two parts after finding split point using
// // findSplitPoint()
// void printTwoParts(int arr[], int n)
// {
//     int splitPoint = findSplitPoint(arr, n);

//     if (splitPoint == -1 || splitPoint == n )
//     {
//         cout << "Not Possible" <<endl;
//         return;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if(splitPoint == i)
//             cout << endl;
//         cout << arr[i] << " " ;
//     }
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
// }