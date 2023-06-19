
// todo: Given an array of integer of size n. Answer q queries where you need to print the sum of values in a given range of indices from l to r(both included )

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Enter Number of element";
    cin >> n; // read the number of elements in the array

    vector<int> arr(n + 1, 0); // initialize a vector of size n+1 with all elements as 0
    cout << "Enter the elements";
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i]; // read the elements of the array
    }

    for (int i = 1; i <= n; i++)
    {
        arr[i] += arr[i - 1]; // calculate the prefix sum
    }

    int q;
    cout << "Enter the number of queries";
    cin >> q; // read the number of queries

    while (q--)
    {
        int l, r;
        cout << "Enter the left and right indices: ";
        cin >> l >> r;                       // read the range of indices
        cout << arr[r] - arr[l - 1] << endl; // print the sum of elements in the given range using prefix sum
    }

    return 0; // end of program
}