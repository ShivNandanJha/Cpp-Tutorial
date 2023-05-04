<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Check if we can partition the array into two subarrays with equal sum.More Formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array
bool checkPrefixSuffuxSum(vector<int> &arr)
{
  // Defining a function named "checkPrefixSuffuxSum" which takes a reference of a vector of integers as an argument and returns a boolean value.
  int totalSum = 0;
  // Initialize a variable named "totalSum" to store the sum of all elements in the vector.
  for (int i = 0; i < arr.size(); i++)
  {
    // Loop through each element of the vector using a for loop and an index variable named "i".
    totalSum += arr[i];
    // Add each element to the "totalSum" variable.
  }
  int prefixSum = 0;
  // Initialize a variable named "prefixSum" to store the sum of elements from the beginning of the vector.
  for (int i = 0; i < arr.size(); i++)
  {
    // Loop through each element of the vector again using a for loop and an index variable named "i".
    prefixSum += arr[i];
    // Add each element to the "prefixSum" variable.
    int suffixSum = totalSum - prefixSum;
    // Calculate the sum of elements from the end of the vector by subtracting the "prefixSum" from the "totalSum".
    if (suffixSum == prefixSum)
    {
      // Check if the "suffixSum" is equal to the "prefixSum".
      return true;
      // If the sums are equal, return true.
    }
  }
  return false;
  // If the function reaches this line, it means that the vector cannot be partitioned into two subarrays with equal sum. Hence, return false.
}

int main()
{
  // This is the main function of the program which will execute when the program runs.
  int n;
  cout << "enter number of element" << endl;
  // Print a message to the console to prompt the user to input the number of elements in the vector.
  cin >> n;
  // Read the input from the user and store it in the variable "n".
  vector<int> arr;
  // Define an empty vector named "arr" to store the input elements.
  for (int i = 0; i < n; i++)
  {
    // Loop through each element of the vector using a for loop and an index variable named "i".
    int element;
    cout << "Enter element " << i << ":" << endl;
    // Print a message to the console to prompt the user to input each element of the vector.
    cin >> element;
    // Read the input from the user and store it in the variable "element".
    arr.push_back(element);
    // Add the input element to the vector using the "push_back()" method.
  }

  cout << checkPrefixSuffuxSum(arr) << endl;
  return 0;
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Check if we can partition the array into two subarrays with equal sum.More Formally, check that the prefix sum of a part of the array is equal to the suffix sum of rest of the array
bool checkPrefixSuffuxSum(vector<int> &arr)
{
  // Defining a function named "checkPrefixSuffuxSum" which takes a reference of a vector of integers as an argument and returns a boolean value.
  int totalSum = 0;
  // Initialize a variable named "totalSum" to store the sum of all elements in the vector.
  for (int i = 0; i < arr.size(); i++)
  {
    // Loop through each element of the vector using a for loop and an index variable named "i".
    totalSum += arr[i];
    // Add each element to the "totalSum" variable.
  }
  int prefixSum = 0;
  // Initialize a variable named "prefixSum" to store the sum of elements from the beginning of the vector.
  for (int i = 0; i < arr.size(); i++)
  {
    // Loop through each element of the vector again using a for loop and an index variable named "i".
    prefixSum += arr[i];
    // Add each element to the "prefixSum" variable.
    int suffixSum = totalSum - prefixSum;
    // Calculate the sum of elements from the end of the vector by subtracting the "prefixSum" from the "totalSum".
    if (suffixSum == prefixSum)
    {
      // Check if the "suffixSum" is equal to the "prefixSum".
      return true;
      // If the sums are equal, return true.
    }
  }
  return false;
  // If the function reaches this line, it means that the vector cannot be partitioned into two subarrays with equal sum. Hence, return false.
}

int main()
{
  // This is the main function of the program which will execute when the program runs.
  int n;
  cout << "enter number of element" << endl;
  // Print a message to the console to prompt the user to input the number of elements in the vector.
  cin >> n;
  // Read the input from the user and store it in the variable "n".
  vector<int> arr;
  // Define an empty vector named "arr" to store the input elements.
  for (int i = 0; i < n; i++)
  {
    // Loop through each element of the vector using a for loop and an index variable named "i".
    int element;
    cout << "Enter element " << i << ":" << endl;
    // Print a message to the console to prompt the user to input each element of the vector.
    cin >> element;
    // Read the input from the user and store it in the variable "element".
    arr.push_back(element);
    // Add the input element to the vector using the "push_back()" method.
  }

  cout << checkPrefixSuffuxSum(arr) << endl;
  return 0;
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
}