<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  // todo: Given a number n. Print if it is an armstrong number or not
  //? an armstrong number is a number that if the sum of every digit in the number raised to the power of total digits in that number is equal to the number

  // function to count the number of digits in a given number
int countDigits(int n) {
    if (n == 0) { // base case: if n is zero, there are no more digits to count
        return 0;
    }
    return 1 + countDigits(n / 10);  // recursive case: count the number of digits in n/10 and add 1 to it
}

  // function to calculate the power of a given number
int raiseToPower(int base, int exponent) {
    if (exponent == 0) { // base case: any number raised to the power of zero is 1
        return 1;
    }
    return base * raiseToPower(base, exponent - 1);  // recursive case: multiply the base with the result of (base^exponent-1)
}

  // function to calculate the sum of powers of each digit in a given number
int sumOfPowers(int n, int digitCount) {
    if (n == 0) { // base case: if n is zero, there are no more digits to calculate the power of
        return 0;
    }
    int digit = n % 10;  // get the last digit of n
                         // recursively calculate the sum of powers of each digit in n by adding the power of the last digit to the sum of powers of remaining digits
    return raiseToPower(digit, digitCount) + sumOfPowers(n / 10, digitCount);
}

  // function to check if a given number is an Armstrong number or not
bool isArmstrong(int n) {
    int    digitCount  = countDigits(n);              // calculate the number of digits in n
    int    sum         = sumOfPowers(n, digitCount);  // calculate the sum of powers of each digit in n
    return n          == sum;                         // return true if n is equal to the sum of powers, else return false
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n)) { // check if n is an Armstrong number
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }
    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  // todo: Given a number n. Print if it is an armstrong number or not
  //? an armstrong number is a number that if the sum of every digit in the number raised to the power of total digits in that number is equal to the number

  // function to count the number of digits in a given number
int countDigits(int n) {
    if (n == 0) { // base case: if n is zero, there are no more digits to count
        return 0;
    }
    return 1 + countDigits(n / 10);  // recursive case: count the number of digits in n/10 and add 1 to it
}

  // function to calculate the power of a given number
int raiseToPower(int base, int exponent) {
    if (exponent == 0) { // base case: any number raised to the power of zero is 1
        return 1;
    }
    return base * raiseToPower(base, exponent - 1);  // recursive case: multiply the base with the result of (base^exponent-1)
}

  // function to calculate the sum of powers of each digit in a given number
int sumOfPowers(int n, int digitCount) {
    if (n == 0) { // base case: if n is zero, there are no more digits to calculate the power of
        return 0;
    }
    int digit = n % 10;  // get the last digit of n
                         // recursively calculate the sum of powers of each digit in n by adding the power of the last digit to the sum of powers of remaining digits
    return raiseToPower(digit, digitCount) + sumOfPowers(n / 10, digitCount);
}

  // function to check if a given number is an Armstrong number or not
bool isArmstrong(int n) {
    int    digitCount  = countDigits(n);              // calculate the number of digits in n
    int    sum         = sumOfPowers(n, digitCount);  // calculate the sum of powers of each digit in n
    return n          == sum;                         // return true if n is equal to the sum of powers, else return false
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isArmstrong(n)) { // check if n is an Armstrong number
        cout << n << " is an Armstrong number" << endl;
    } else {
        cout << n << " is not an Armstrong number" << endl;
    }
    return 0;
}
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
