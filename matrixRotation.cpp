#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

// todo: Given a square matrix, turn it by 90 degree in a clockwise direction without using any extra space/array
//? input matrix:[ [1,2,3][4,5,6][7,8,9]]
//? output matrix:[ [ 7,4, 1][8,5, 2][9,6,3]]

void rotateMatrix(vector<vector<int>> &vec)
{
    int n = vec.size();
    // transpose
    for (int i = 0; i < n; i++)
    
        {
            for (int j = 0; j < i; j++)
            {
                swap(vec[i][j], vec[j][i]);
            }
        }

        // rotate by 90degree
        for (int i = 0; i < n; i++)
        {
            reverse(vec[i].begin(), vec[i].end());
        }

        return;
    }

int main()
{

    int n;
    cout << "Enter number of rows for a square matrix: ";
    cin >> n;
    vector<vector<int>> vec(n, vector<int>(n));
    cout << "Enter element of the matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> vec[i][j];
        }
    }
    rotateMatrix(vec);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
}