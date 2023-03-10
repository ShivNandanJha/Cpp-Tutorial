#include <iostream>
using namespace std;

int main()
{
    int binaryNum, decimalNum = 0, base = 1;
    // declare and initialize variables: binaryNum (input), decimalNum (output), and base (used for calculation)

    cout << "Enter a binary number: ";
    cin >> binaryNum; // get binary input from user

    while (binaryNum > 0)
    {
        int lastDigit = binaryNum % 10; // get the last digit of the binary number
        binaryNum /= 10; // remove the last digit from the binary number

        decimalNum += lastDigit * base; // multiply the last digit with the appropriate power of 2 and add to decimalNum
        base *= 2; // increment the power of 2 for the next digit
    }

    cout << "Answer in decimal is: " << decimalNum << endl; // output the decimal number

    return 0;
}
