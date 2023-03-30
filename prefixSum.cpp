#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

     // todo: Given an array 'a',return the prefix sum/running sum in the same array without creating a new array
     //? for example: arr[5,4,2,3,7], then the prefix sum array will be preSumArray[5,(5+4),(5+4+2),(5+4+2+3),(5+4+2+3+7)]
   

void prefixSumArr(vector<int> &arr){
      // A function to calculate the prefix sum of the input vector is defined, which takes a vector by reference as input.
    for (int i = 1; i < arr.size();i++){
          // Iterate over the vector starting from the second element
          // and add the previous element to the current element to calculate the prefix sum.
        arr[i] = arr[i - 1] + arr[i];
    }
      // Return nothing, as the vector is passed by reference and modified in place.
    return;
}

 int main(){
      // Define the main function.
    int n;
    cout << "enter number of element" << endl;
      // Prompt the user to input the number of elements in the vector.
    cin >> n;
    vector<int> arr;
      // Define a vector to store the input elements.
    for (int i = 0; i < n;i++){
        int element;
        cout << "Enter element " << i << ":" << endl;
          // Prompt the user to input each element of the vector.
        cin >> element;
        arr.push_back(element);
          // Add the input element to the vector.
    }

    prefixSumArr(arr);
    // Call the prefixSumArr function to calculate the prefix sum of the input vector.
    cout << "The prefix sum or running sum of the given input number is: " << endl;
    for (int i = 0; i < n; i++)
    {
        // Iterate over the input vector and print the prefix sum for each element.
        cout << arr[i] << " ";
    }
    cout << endl;
    // Print a new line after printing the prefix sum.

    return 0;
 } 
