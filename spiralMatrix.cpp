#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  // todo: Given an m x n matrix , return all elements of the matrix in spiral order.
  // This function prints the matrix in spiral order
void spiralOrder( vector<vector<int>> &matrix){
                                        // Initialize the variables
    int left   = 0;                     // Index of the left column
    int right  = matrix[0].size() - 1;  // Index of the right column
    int top    = 0;                     // Index of the top row
    int bottom = matrix.size() - 1;     // Index of the bottom row

    int direction = 0;  // Direction of traversal (0 for left to right, 1 for top to bottom, 2 for right to left, 3 for bottom to top)

      // Traverse the matrix in spiral order
    while(left<=right && top<=bottom){
          // Traverse from left to right
        if(direction==0){
            for (int col = left; col <= right;col++){
                cout << matrix[top][col]<<" ";  // Print the top row from left to right
            }
            top++;  // Increment the top index
        }
          // Traverse from top to bottom
        else if(direction==1){
            for (int row = top; row <= bottom;row++){
                cout << matrix[row][right]<<" ";  // Print the right column from top to bottom
            }
            right--;  // Decrement the right index
        }
          // Traverse from right to left
        else if(direction==2){
            for (int col = right; col >= left;col--){
                cout << matrix[bottom][col]<<" ";  // Print the bottom row from right to left
            }
            bottom--;  // Decrement the bottom index
        }
          // Traverse from bottom to top
        else{
            for (int row = bottom; row >= top;row--){
                cout << matrix[row][left]<<" ";  // Print the left column from bottom to top
            }
            left++;  // Increment the left index
        }
        direction = (direction + 1) % 4;  // Update the direction of traversal
    }
}

int main(){
     int row, col;
     cout << "Enter number of Rows and Columns: ";
     cin >> row >> col;

       // Create a matrix of given size
     vector<vector<int>> matrix(row, vector<int>(col));

       // Get the matrix elements from the user
     for (int i = 0; i < row;i++){
         for (int j = 0; j < col;j++){
             cout << "Enter element" << i << j << ": "; 
             cin >> matrix[i][j];
         }
     }
     for (int i = 0; i < row;i++){
         for (int j = 0; j < col;j++){
             cout << matrix[i][j] << " "; 
             
         }
         cout << endl;
     }

     // Print the matrix in spiral order
     spiralOrder(matrix);
     return 0;
}
