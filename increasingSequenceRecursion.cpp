#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: given a number n, output the increasing sequence  using recursive function
void printSequence(int n)
{
    if (n < 1)
    {
        return;
    }
    printSequence(n - 1);
    cout << n << " ";
}

// todo: Given a number 'n' and an integer 'k', Print k multiples of n.
void printMultiples(int num, int k)
{
    if (k == 0)
    {
        return;
    }

    printMultiples(num, k - 1);
    cout << (num * k) << " ";
}

// todo: Given a number 'n'. Find the sum of natural numbers till n but with alternate signs
int printSum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return printSum(n - 1) + ((n % 2 == 0) ? (-n) : (n));
}

int main()
{
    int n = 5;
    int num = 12;
    cout << "Problem 1 :";
    printSequence(n);
    cout << endl;
    cout << "Problem 2 :";
    printMultiples(num, n);
    cout << endl;
    cout << "Problem 3 :";
    cout << printSum(n);

    return 0;
}