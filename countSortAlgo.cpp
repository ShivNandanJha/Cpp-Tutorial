<<<<<<< HEAD
#include <iostream>
#include <vector>
using namespace std;

  // todo: implementation of Count Sort algorithm

void countSort(vector<int> &arr, int range)
{
    int n = arr.size();
    vector<int> count(range + 1, 0); // initialize count array with 0's

    // count the frequency of each element in arr
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // update count array to store cumulative frequency
    for (int i = 1; i <= range; i++)
    {
        count[i] += count[i - 1];
    }

    vector<int> sorted(n); // create output array

    // place elements of arr in sorted order using count array
    for (int i = n - 1; i >= 0; i--)
    {
        sorted[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // copy sorted array to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = sorted[i];
    }
}

int main()
{
    vector<int> arr   = {3, 1, 5, 5, 4,9,7,3,2};
    int         range = arr.size();

    countSort(arr, range);

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
using namespace std;

  // todo: implementation of Count Sort algorithm

void countSort(vector<int> &arr, int range)
{
    int n = arr.size();
    vector<int> count(range + 1, 0); // initialize count array with 0's

    // count the frequency of each element in arr
    for (int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }

    // update count array to store cumulative frequency
    for (int i = 1; i <= range; i++)
    {
        count[i] += count[i - 1];
    }

    vector<int> sorted(n); // create output array

    // place elements of arr in sorted order using count array
    for (int i = n - 1; i >= 0; i--)
    {
        sorted[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // copy sorted array to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = sorted[i];
    }
}

int main()
{
    vector<int> arr   = {3, 1, 5, 5, 4,9,7,3,2};
    int         range = arr.size();

    countSort(arr, range);

    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
