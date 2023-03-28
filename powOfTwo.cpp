#include <iostream>
using namespace std;
#include <math.h>

// todo: Given an integer n , returns true if it is a power of two, otherwise return false.
//? An integer n is a power of two, if there exists an integer x such that n == 2^x.

bool isPowerOfTwo(int n)
{
    if (n <= 0)
    { // negative or zero values are not powers of two
        return false;
    }
    return !(n & (n - 1)); // return true if n has only one bit set to 1
}

int main()
{
    int n = 16;                                                                // set the input value
    bool result = isPowerOfTwo(n);                                             // check if n is a power of two
    cout << n << " is " << (result ? "" : "not ") << "a power of two" << endl; // print the result
    return 0;
}
