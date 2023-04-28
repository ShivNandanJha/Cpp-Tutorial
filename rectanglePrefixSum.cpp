#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given an m x n matrix 'a' and two coordinates (l1,r1) and (l2,r2). Return the sum of the rectangle from (l1,r1) to (l2,r2)
int rectangleSum(vector<vector<int>> &matrix, int l1, int r1, int l2, int r2)
{
    int sum = 0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    int row, col;
    cout << "Enter number of Rows and Columns: ";
    cin >> row >> col;

    // Create a matrix of given size
    vector<vector<int>> matrix(row, vector<int>(col));

    // Get the matrix elements from the user
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "Enter element" << i << j << ": ";
            cin >> matrix[i][j];
        }
    }
    int l1, l2, r1, r2;
    cout << "Enter the coordinates (l1,r1) and (l2,r2): " << endl;
    cin >> l1 >> r1 >> l2 >> r2;

    // Print the matrix
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int sum = rectangleSum(matrix, l1, r1, l2, r2);
    cout <<"Sum is: "<< sum << endl;
    return 0;
}