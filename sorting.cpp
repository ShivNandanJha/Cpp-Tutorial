<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given an array arr, move all the 0's to the end of it while maintaining the relative order of the non zero elements
//?? input: 0 5 0 3 42            output: 5 3 42 0 0
void sortZeroes(vector<int> &arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag = false;
        while (j != i)
        {
            if (arr[j] == 0 && arr[j + 1] != 0)
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
            j++;
        }
        if (!flag)
            break;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortZeroes(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: Given an array arr, move all the 0's to the end of it while maintaining the relative order of the non zero elements
//?? input: 0 5 0 3 42            output: 5 3 42 0 0
void sortZeroes(vector<int> &arr, int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        bool flag = false;
        while (j != i)
        {
            if (arr[j] == 0 && arr[j + 1] != 0)
            {
                swap(arr[j], arr[j + 1]);
                flag = true;
            }
            j++;
        }
        if (!flag)
            break;
    }
    return;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sortZeroes(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
}