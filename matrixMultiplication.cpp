#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


      //todo: Write a program to display multiplication of two matrices entered  by the user

int main()
{
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns of first matrix: ";
    cin >> rows1 >> cols1;
    cout << "Enter the number of rows and columns of second matrix: ";
    cin >> rows2 >> cols2;

    // Check if multiplication is possible
    if (cols1 != rows2) {
        cout << "Error: Multiplication not possible";
        return 0;
    }

    // Declare and initialize matrices
    int matrix1[rows1][cols1], matrix2[rows2][cols2], product[rows1][cols2];
    cout << "Enter the elements of first matrix:\n";
    for(int i = 0; i < rows1; ++i)
        for(int j = 0; j < cols1; ++j)
            cin >> matrix1[i][j];
    cout << "Enter the elements of second matrix:\n";
    for(int i = 0; i < rows2; ++i)
        for(int j = 0; j < cols2; ++j)
            cin >> matrix2[i][j];

    // Multiply matrices
    for(int i = 0; i < rows1; ++i) {
        for(int j = 0; j < cols2; ++j) {
            product[i][j] = 0;
            for(int k = 0; k < cols1; ++k)
                product[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }

    // Display the product matrix
    cout << "Product of the matrices:\n";
    for(int i = 0; i < rows1; ++i) {
        for(int j = 0; j < cols2; ++j)
            cout << product[i][j] << " ";
        cout << endl;
    }

    return 0;
}
