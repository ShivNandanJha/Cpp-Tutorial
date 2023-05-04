<<<<<<< HEAD
#include <iostream>
using namespace std;

// todo: Write a program to find the kth smallest term from an array using quicksort algo

// Partition function to divide the array into two subarrays around a pivot element
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Initialize the index of the smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If the current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++;                  // Increment the index of the smaller element
            swap(arr[i], arr[j]); // Swap the current element with the smaller element
        }
    }

    swap(arr[i + 1], arr[high]); // Swap the pivot element with the element at the next index of smaller element
    return (i + 1);              // Return the index of the pivot element
}

// Quicksort function to sort the array in non-decreasing order
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(arr, low, high); // Get the index of the pivot element
        quicksort(arr, low, pivot_index - 1);        // Sort the left subarray
        quicksort(arr, pivot_index + 1, high);       // Sort the right subarray
    }
}

// Function to find the kth smallest element from the array using quicksort algorithm
int kth_smallest(int arr[], int n, int k)
{
    quicksort(arr, 0, n - 1); // Sort the array in non-decreasing order
    return arr[k - 1];        // Return the kth smallest element
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Find the 3rd smallest element

    int kth = kth_smallest(arr, n, k);
    cout << "The " << k << "th smallest element is: " << kth << endl;

    return 0;
}
=======
#include <iostream>
using namespace std;

// todo: Write a program to find the kth smallest term from an array using quicksort algo

// Partition function to divide the array into two subarrays around a pivot element
int partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // Choose the last element as pivot
    int i = low - 1;       // Initialize the index of the smaller element

    for (int j = low; j <= high - 1; j++)
    {
        // If the current element is smaller than or equal to pivot
        if (arr[j] <= pivot)
        {
            i++;                  // Increment the index of the smaller element
            swap(arr[i], arr[j]); // Swap the current element with the smaller element
        }
    }

    swap(arr[i + 1], arr[high]); // Swap the pivot element with the element at the next index of smaller element
    return (i + 1);              // Return the index of the pivot element
}

// Quicksort function to sort the array in non-decreasing order
void quicksort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pivot_index = partition(arr, low, high); // Get the index of the pivot element
        quicksort(arr, low, pivot_index - 1);        // Sort the left subarray
        quicksort(arr, pivot_index + 1, high);       // Sort the right subarray
    }
}

// Function to find the kth smallest element from the array using quicksort algorithm
int kth_smallest(int arr[], int n, int k)
{
    quicksort(arr, 0, n - 1); // Sort the array in non-decreasing order
    return arr[k - 1];        // Return the kth smallest element
}

int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3; // Find the 3rd smallest element

    int kth = kth_smallest(arr, n, k);
    cout << "The " << k << "th smallest element is: " << kth << endl;

    return 0;
}
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
