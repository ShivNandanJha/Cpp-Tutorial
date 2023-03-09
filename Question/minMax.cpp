
#include <iostream>
using namespace std;

// todo: Function to find the maximum value in an array of integers

int getMax(int num[], int n)
{
    // Initialize the maximum value to the smallest possible value using INT16_MIN constant from <limits.h> library
    int max = INT16_MIN;
    // Loop through the array and compare each element with the current maximum value
    for (int i = 0; i < n; i++)
    {
        // If the current element is greater than the current maximum value, update the maximum value
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    // Return the maximum value
    return max;
}

int getMin(int num[], int n)
{
    // Initialize the minimum value to the largest possible value using INT16_MAX constant from <limits.h> library
    int min = INT16_MAX;
    // Loop through the array and compare each element with the current minimum value
    for (int i = 0; i < n; i++)
    {
        // If the current element is smaller than the current minimum value, update the minimum value
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    // Return the minimum value
    return min;
}

int main()
{
    // Declare a variable to hold the size of the array
    int size;
    // Prompt the user to enter the size of the array
    cin >> size;
    // Declare an array to hold the integers entered by the user, with a maximum size of 100
    int num[100];

    // Loop through the array and prompt the user to enter each integer
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    // Call the getMax function to find the maximum value in the array and print it to the console
    cout << "Maximum value is: " << getMax(num, size) << endl;
    // Call the getMin function to find the minimum value in the array and print it to the console
    cout << "Minimum value is: " << getMin(num, size) << endl;

    // Exit the program
    return 0;
}
