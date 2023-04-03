#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: for an integer n, return the first n rows of pascal's triangle

int main()
{ // Defining the main function

    int n;  // Declaring an integer variable n

    cout << "Enter the number of rows to print: "; // Displaying a message to the user to enter the number of rows to print
    cin >> n;                                      // Taking user input for the number of rows to print

    int arr[n][n]; // Declaring a 2D integer array with n rows and n columns

    // Initializing the first two rows of the Pascal's triangle
    arr[0][0] = 1;
    arr[1][0] = 1;
    arr[1][1] = 1;

    // Generating the rest of the rows using a nested loop
    for (int i = 2; i < n; i++)
    {                  // Iterating over rows starting from the third row
        arr[i][0] = 1; // Initializing the first element of the row with 1
        for (int j = 1; j < i; j++)
        {                                                  // Iterating over columns starting from the second column
            arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j]; // Calculating the element at row i, column j based on the previous row
        }
        arr[i][i] = 1; // Initializing the last element of the row with 1
    }

    // Printing the Pascal's triangle
    for (int i = 0; i < n; i++)
    { // Iterating over rows
        for (int j = 0; j <= i; j++)
        {                             // Iterating over columns up to the ith column
            cout << arr[i][j] << " "; // Displaying the element at row i, column j
        }
        cout << endl; // Moving to the next row
    }

    return 0; // Returning 0 to indicate successful execution of the program
}
