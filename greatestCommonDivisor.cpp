#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given two numbers 'x' and 'y'.Find the greatest common divisor ofx and y using recursion

/*
?Euclid's Algorithm
!Euclid's algorithm is a method for finding the greatest common divisor (GCD) of two integers. The algorithm works by repeatedly subtracting the smaller number from the larger number until one of the numbers becomes zero. The GCD is then the remaining nonzero number.
! For example, GCD of 54 and 72 will be eaual to GCD of 54 and (72-54)
! Also, gcd(a,b) = gcd (b, a%b), considering a > b.

*/

int gcd(int a, int b) // Function definition for calculating GCD of two numbers
{
    if (b == 0) // Checking if second number is zero
    {
        return a; // If second number is zero, return the first number
    }
    return gcd(b, a % b); // If second number is not zero, call the same function recursively with the second number and the remainder obtained by dividing the first number by the second number
}

int main() // Main function of the program
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    int result = gcd(a, b);                                             // Calling the function to calculate the GCD of the two variables
    cout << "GCD of " << a << " and " << b << " is " << result << endl; // Printing the result
    return 0;                                                           // Returning 0 to signify the successful execution of the program
}
