

#include <iostream>  // header file for input/output operations in C++
#include <vector>    // header file to work with arrays
using namespace std; // standard namespace

// todo: Sort an array consisting of only 0s and 1s.
//? Normal Method 

// function to sort an array consisting of only 0s and 1s
void sortZeroesandOnes(vector<int> &v)
{
    int zero_count = 0; // declare and initialize a count variable for number of 0s
    for (int element : v)
    { // iterate through the input vector
        if (element == 0)
        {                 // check if the element is 0
            zero_count++; // increment the count of 0s
        }
    }
    for (int i = 0; i < v.size(); i++)
    { // iterate through the input vector again
        if (i < zero_count)
        {             // until the count of 0s is reached
            v[i] = 0; // set the elements to 0
        }
        else
        {
            v[i] = 1; // then set the rest of the elements to 1
        }
    }
}

//? Two Pointer method

void sort_zero_and_one(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;

    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] == 1 && v[right_ptr] == 0)
        {
            v[left_ptr++] = 0;
            v[right_ptr--] = 1;
        }
        if (v[left_ptr] == 0)
        {
            left_ptr++;
        }
        if (v[right_ptr] == 1)
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

    sortZeroesandOnes(v); // sort the elements in the array using the function sortZeroesandOnes

    sort_zero_and_one(v); // sort the elements in the array using the function sort_zero_and_one

      // print the sorted array to the console
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl; // move to the next line after printing the sorted array
    return 0;     // exit the main function

}
