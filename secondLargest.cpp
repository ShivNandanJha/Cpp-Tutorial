<<<<<<< HEAD
#include <iostream>
using namespace std;

void findLargestAndSecondLargest(int arr[], int n) 
{
    int largest       = arr[0];
    int secondLargest = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest       = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "The  largest number in the array is: " << largest << endl;
    cout << "The second largest number in the array is: " << secondLargest;
}

int main() 
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findLargestAndSecondLargest(arr, n);

    return 0;
}
=======
#include <iostream>
using namespace std;

void findLargestAndSecondLargest(int arr[], int n) 
{
    int largest       = arr[0];
    int secondLargest = -1;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > largest)
        {
            secondLargest = largest;
            largest       = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "The  largest number in the array is: " << largest << endl;
    cout << "The second largest number in the array is: " << secondLargest;
}

int main() 
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findLargestAndSecondLargest(arr, n);

    return 0;
}
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
