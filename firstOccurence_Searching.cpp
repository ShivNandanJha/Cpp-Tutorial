#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: find the first occurence of an element from a sorted array


int firstOccurence(int arr[], int n, int target)  // define a function to find the first occurrence of a target value in a sorted array
{
    int low  = 0; // initialize the lower bound of the search range to 0
    int high = n - 1; // initialize the upper bound of the search range to the last index of the array
    int ans  = -1; // initialize the answer variable to -1
    while (low <= high) // loop until the lower bound is less than or equal to the upper bound
    {
                                     // calculate mid point
        int mid = (low + high) / 2;  //*it may also be a good idea to try mid = low + ((high - low)/2 to avoid integer overflow
        if (arr[mid] == target) // check if the middle element is equal to the target value
        {
            ans  = mid; // update the answer variable to the middle index
            high = mid - 1; // update the upper bound to one less than the middle index
        }

        else if (arr[mid] < target) // check if the middle element is less than the target value
        {
                // discard the left of mid
            low = mid + 1; // update the lower bound to one more than the middle index
        }
        else // otherwise, if the middle element is greater than the target value
        {
                // discard the right of mid
            high = mid - 1; // update the upper bound to one less than the middle index
        }
    }
    return ans; // return the answer variable as the first occurrence of the target value or -1 if not found
}

int main() // define the main function
{
    int arr[] = {2, 2, 5, 5, 5, 9, 10, 11, 15, 15}; // declare and initialize an array of integers
    int n     = sizeof(arr) / sizeof(arr[0]); // calculate and store the size of the array
    int target; // declare a variable to store the target value
    cout << "Enter the target: "; // print a message to prompt the user for input
    cin >> target; // read the input from the user and store it in the target variable
    cout << firstOccurence(arr, n, target); // print the result of calling the firstOccurence function with the array, size and target value

    return 0; // return 0 to indicate successful execution of the program
}
