#include <iostream>
#include <vector>
using namespace std;

// todo: Given an array of integer 'a', move all the even integers at the beginning of the array followed by all the odd integers. order of odd or even integers does not matter.
void sortArray(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 == 1 && v[right_ptr] % 2 == 0) //check if left_ptr is odd and right_ptr is even
        {
            swap(v[left_ptr], v[right_ptr]);  //if yes, swap both position with each other
            left_ptr++;
            right_ptr--;
        }
        if (v[left_ptr] % 2 == 0) // check if left_ptr is even , if yes then check for next index
        {
            left_ptr++;
        }
        if (v[right_ptr] % 2 == 1) // check if right_ptr is odd , if yes then check for v.size()-1 index
        {
            right_ptr--;
        }
    }
    return;
}

// main function that takes input of elements in array of 0s and 1s and calls the function to sort them
int main()
{
    int n; // declare variable n for number of elements of array
    cout << "enter number of element" << endl;
    cin >> n;      // take input of n from user
    vector<int> v; // declare a vector to store elements in
    for (int i = 0; i < n; i++)
    {                // iterate through the array up to n times
        int element; // declare variable to store input element
        cout << "Enter element" << i << ":" << endl;
        cin >> element;       // take input of element from user
        v.push_back(element); // push the element to the back of the vector
    }

    sortArray(v); // call the function to sort the elements in the vector

    // print the sorted array to the console
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl; // move to the next line after printing the sorted array
    return 0;     // exit the main function
}