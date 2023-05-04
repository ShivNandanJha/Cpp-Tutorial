<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binerySearch(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        // calculate mid point
        int mid = (low + high) / 2; //*it may also be a good idea to try mid = low + ((high - low)/2 to avoid integer overflow

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            // discard the left of mid
            low = mid + 1;
        }
        else
        {
            // discard the right of mid
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter number of elements of array : ";
    cin >> n;
    cout << "enter element: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    cout << "----------------------------------------\n"
         << "the entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " The target element is present at the index: " << binerySearch(arr, target);

    return 0;
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binerySearch(vector<int> &arr, int target)
{
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        // calculate mid point
        int mid = (low + high) / 2; //*it may also be a good idea to try mid = low + ((high - low)/2 to avoid integer overflow

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            // discard the left of mid
            low = mid + 1;
        }
        else
        {
            // discard the right of mid
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter number of elements of array : ";
    cin >> n;
    cout << "enter element: ";
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the target element: ";
    cin >> target;

    cout << "----------------------------------------\n"
         << "the entered array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << " The target element is present at the index: " << binerySearch(arr, target);

    return 0;
}
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
