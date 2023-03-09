#include<iostream>
#include<vector>
using namespace std;

/*
todo: This program finds the number of occurrence of a number greater than the number input by the user from an array.
*/

int main() {
    vector<int> v(6);  // create a vector of size 6 to store integer values

    for (int i= 0; i < v.size();i++){  // loop through the vector to read the input values from user
        cin >> v[i]; // read input value from user and store it in vector v
    }

    cout << "Enter number: " << endl;  // print the message to ask user to input a number
    int x;
    cin >> x;  // read the input number from user and store it in variable x

    int occurred =0;  // initialize a counter variable to keep track of number of occurrences

    for (int i = 0; i < v.size(); i++) {  // loop through the vector to count the number of occurrences
        if (v[i] > x) {  // check if the current element in the vector is greater than the input number x
            occurred ++;  // if yes, increment the occurrence counter
        }
    }

    cout << occurred << endl;  // print the number of occurrences of numbers greater than input number x
    return 0;  // exit the program with a status code 0 indicating successful completion
}
