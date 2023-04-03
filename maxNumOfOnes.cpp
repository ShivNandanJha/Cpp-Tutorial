#include <iostream>  // Importing the input-output library
#include <vector>    // Importing the vector library
#include <algorithm> // Importing the algorithm library
using namespace std;

  // todo: Given a boolean 2D array, where each row is sorted.Find the row with the maximum number of 1s.

// A function to find the row with the maximum number of 1s in a boolean 2D array
int maxOneRow(vector<vector<int>> &vec)
{
    int maxOnes = INT64_MIN; // Initializing the maximum number of 1s found so far to a very small value
    int maxOnesRow = -1;     // Initializing the row index with the row containing the maximum number of 1s so far to -1
    int col = vec[0].size(); // Get the number of columns in the boolean 2D array

    // Traverse each row of the boolean 2D array
    for (int i = 0; i < vec.size(); i++)
    {
        // Traverse each element of the current row
        for (int j = 0; j < vec[i].size(); j++)
        {
              // If the element is 1
            if (vec[i][j] == 1)
            {
                int numberofOnes = col - j; // Calculate the number of 1s in the current row
                if (numberofOnes > maxOnes)
                {
                    maxOnes = numberofOnes; // Update the maximum number of 1s found so far
                    maxOnesRow = i;         // Update the row index with the row containing the maximum number of 1s so far
                }
            }
        }
    }

    return maxOnesRow; // Return the row index with the maximum number of 1s
}

// The main function
int main()
{
    int n, m;
    cout << "enter number of rows and columns: " << endl;
    cin >> n >> m; // Get the number of rows and columns from the user

    vector<vector<int>> vec(n, vector<int>(m)); // Initialize a 2D vector with n rows and m columns

    // Get the boolean 2D array from the user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }

    int result = maxOneRow(vec); // Find the row index with the maximum number of 1s

    cout << result << endl; // Display the result

    return 0;
}
