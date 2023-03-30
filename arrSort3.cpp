//Two pointer pattern

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
  //todo: Given an integer array 'a' sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

  // Function to return the array of squares of each number of 'a' sorted in non-decreasing order.
vector<int> sortedSquares(vector<int>& a) {
      // Create an empty result vector of the same size as 'a'.
    vector<int> result(a.size());
      // Set left pointer to the beginning of 'a', and right pointer to the end of 'a'.
    int left = 0, right = a.size() - 1;
      // Iterate from the end of 'a' to the beginning.
    for (int i = a.size() - 1; i >= 0; i--) {
          // Check if the absolute value of the element at the left pointer is greater than the absolute value of the element at the right pointer.
        if (abs(a[left]) > abs(a[right])) {
              // If it is, square the element at the left pointer and add it to the result vector.
            result[i] = a[left] * a[left];
              // Increment the left pointer.
            left++;
        } else {
              // Otherwise, square the element at the right pointer and add it to the result vector.
            result[i] = a[right] * a[right];
              // Decrement the right pointer.
            right--;
        }
    }
      // Return the result vector.
    return result;
}


int main() {
      // Declare an integer variable to store the number of elements.
    int n;
      // Prompt the user to enter the number of elements.
    cout << "enter number of element" << endl;
      // Read the number of elements from the user.
    cin >> n;
      // Declare a vector to store the elements.
    vector<int> arr;
      // Loop to read the elements from the user and store them in the vector.
    for (int i = 0; i < n;i++){
        // Declare an integer variable to store the element.
        int element;
        // Prompt the user to enter the element.
        cout << "Enter element " << i << ":" << endl;
        // Read the element from the user.
        cin >> element;
        // Add the element to the vector.
        arr.push_back(element);
    }
    // Call the sortedSquares function and store the result in a vector.
    vector<int> result = sortedSquares(arr);
    // Loop through the result vector and print each element.
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    // Print a newline character.
    cout << endl;
    // Return 0 to indicate successful program execution.
    return 0;
}
