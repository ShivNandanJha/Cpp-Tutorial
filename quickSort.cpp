<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Quick Sort Algorithm

using namespace std;

void quicksort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return; // base case: array is sorted

    int pivot = arr[left]; // choose pivot element (first element)
    int i = left + 1;      // index of first element after pivot

    for (int j = left + 1; j <= right; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]); // swap element with first element after pivot
            i++;                  // increment index of first element after pivot
        }
    }

    swap(arr[left], arr[i - 1]); // swap pivot element with last element smaller than pivot

    // recursively sort left and right subarrays
    quicksort(arr, left, i - 2);
    quicksort(arr, i, right);
}

  /*
!---------------------------------------------------------------------------------------
!Different approach by taking pivot at right most element

int partition(vector<int>& arr, int left, int right) {
int pivot = arr[right]; // choose pivot element (last element)
int i = left - 1; // index of last element smaller than pivot

for (int j = left; j < right; j++) {
    if (arr[j] < pivot) {
        i++; // increment index of last element smaller than pivot
        swap(arr[i], arr[j]); // swap element with last element smaller than pivot
    }
}

swap(arr[i+1], arr[right]); // swap pivot element with first element greater than pivot

return i+1; // return index of pivot element
}

void quicksort(vector<int>& arr, int left, int right) {
if (left >= right) return; // base case: array is sorted

int p = partition(arr, left, right);  partition the array

quicksort(arr, left, p-1);    //recursively sort left and right subarrays
quicksort(arr, p+1, right);
}
!---------------------------------------------------------------------------------------------------------
*/

int main()
{
    vector<int> arr = {5, 2, 9, 11, 15, 6, 3, 66};
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Quick Sort Algorithm

using namespace std;

void quicksort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return; // base case: array is sorted

    int pivot = arr[left]; // choose pivot element (first element)
    int i = left + 1;      // index of first element after pivot

    for (int j = left + 1; j <= right; j++)
    {
        if (arr[j] < pivot)
        {
            swap(arr[i], arr[j]); // swap element with first element after pivot
            i++;                  // increment index of first element after pivot
        }
    }

    swap(arr[left], arr[i - 1]); // swap pivot element with last element smaller than pivot

    // recursively sort left and right subarrays
    quicksort(arr, left, i - 2);
    quicksort(arr, i, right);
}

  /*
!---------------------------------------------------------------------------------------
!Different approach by taking pivot at right most element

int partition(vector<int>& arr, int left, int right) {
int pivot = arr[right]; // choose pivot element (last element)
int i = left - 1; // index of last element smaller than pivot

for (int j = left; j < right; j++) {
    if (arr[j] < pivot) {
        i++; // increment index of last element smaller than pivot
        swap(arr[i], arr[j]); // swap element with last element smaller than pivot
    }
}

swap(arr[i+1], arr[right]); // swap pivot element with first element greater than pivot

return i+1; // return index of pivot element
}

void quicksort(vector<int>& arr, int left, int right) {
if (left >= right) return; // base case: array is sorted

int p = partition(arr, left, right);  partition the array

quicksort(arr, left, p-1);    //recursively sort left and right subarrays
quicksort(arr, p+1, right);
}
!---------------------------------------------------------------------------------------------------------
*/

int main()
{
    vector<int> arr = {5, 2, 9, 11, 15, 6, 3, 66};
    int n = arr.size();

    quicksort(arr, 0, n - 1);

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
