#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given an array, print all the elements of an array using recursive function;

void printElement(int *arr, int i, int n)
{
    if (i == n)
    {
        return;
    }
    cout << arr[i] << " ";
    printElement(arr, i + 1, n);
}

int main()
{
    int arr[] = {2, 4, 5, 6, 7, 8, 9};
    int n = 7;
    int i = 0;

    printElement(arr, i, n);

    return 0;
}