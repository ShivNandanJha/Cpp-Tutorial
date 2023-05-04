#include <iostream>      // Preprocessor directive that includes the input-output stream header file
#include <vector>        // Preprocessor directive that includes the vector container header file
using    namespace std;  // Using the standard namespace 

/*
    todo: To finds the number of occurrence of a number input by the user from an array.
*/

int main() {    

    vector<int> v(6);  // Creates a vector of integer type with 6 elements and initializes them to zero

    // A for loop to take user input of the vector elements
    for (int i = 1; i <= v.size(); i++) {
        cin >> v[i];  // Take input from the user and store it in the ith position of the vector
    }

    cout << "Enter number: " << endl;  // Print a message asking the user to enter a number to find its occurrence
    int x;
    cin >> x;  // Take input from the user and store it in x variable

    int occurred = 0;  // Initialize a variable called 'occurred' to 0, which will be used to keep track of the number of occurrences of the input number

    // A for loop to search for the number of occurrences of the input number in the vector
    for (int i = 0; i < v.size(); i++) {
        // If the current element of the vector matches the number we're searching for, increment the value of 'occurred' by 1
        if (v[i] == x) {
            occurred++;
        }
    }
    cout << occurred << endl;  // Print the number of occurrences of the input number
    return 0;  // Return 0 to indicate successful completion of the program
}
