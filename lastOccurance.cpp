#include <iostream>
#include <vector>
using namespace std;

/*
todo: This program finds the last occurrence of a number input by the user from an array.
*/

int main()
{

    vector<int> v(6); // Create a vector of integers called 'v' with 6 element

    for (int i = 0; i < 6; i++)
    { // Use a loop to read in 6 integer values from the user and store them in the vector
        cin >> v[i];
    }

    cout << "Enter number: " << endl; // Ask the user to input a number to find the last occurrence of
    int x;
    cin >> x;

    int occurred = -1; // Initialize a variable called 'occurred' to -1, which will be used to keep track of the last occurrence of the number

    for (int i = 0; i < v.size(); i++)
    { // Use a loop to search for the last occurrence of the number in the vector
        // If the current element of the vector matches the number we're searching for, update the value of 'occurred' to the current index
        if (v[i] == x)
        {
            occurred = i;
        }
    }    cout << occurred << endl; // Output the index of the last occurrence of the number

    //******************** or *********************

    for (int i = v.size() - 1; i >= 0; i--)
    {
        if (v[i] == x)
        {
            occurred = i;
            break;
        }
    }
    cout << occurred << endl; // Output the index of the last occurrence of the number

    return 0;
}
