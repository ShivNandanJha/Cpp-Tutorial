#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// todo: merge two sorted array in a single sorted array

void mergeSort(int arr1[], int n1, int arr2[], int n2, int arr3[])
{
    int a = 0; // pointer for arr1
    int b = 0; // pointer for arr2
    int c = 0; // pointer for arr3

    while (a < n1 && b < n2) //*loop through both arrays until one of them is completely traversed
    {
        if (arr1[a] < arr2[b])
        {
            arr3[c++] = arr1[a++];
        }
        else
        {
            arr3[c++] = arr2[b++];
        }
    }

    while (a < n1) //   * add the remaining elements of arr1 to the merged array

    {
        arr3[c++] = arr1[a++];
    }
    //   *add the remaining elements of arr2 to the merged array
    while (b < n2)
    {
        arr3[c++] = arr2[b++];
    }
}

int main()
{
    int arr1[] = {5, 8, 12, 13, 18};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {2, 3, 10, 11, 16};
    int n2 = sizeof(arr2) / sizeof(arr1[0]);
    int n3 = n1 + n2;
    int arr3[n3];
    mergeSort(arr1, n1, arr2, n2, arr3);

    for (int i = 0; i < n3; i++)
    {
        cout << arr3[i] << " ";
    }
    cout << endl;
    return 0;
}

//! Different Approach using vector  💡

// vector<int> mergeArrays(vector<int> arr1, vector<int> arr2) {
//     vector<int> mergedArr; // create a vector to store the merged array
//     int i = 0, j = 0; // initialize counters for both arrays

//     //* loop through both arrays until one of them is completely traversed
//     while (i < arr1.size() && j < arr2.size()) {
//         // compare the elements at the current positions in both arrays
//         //* add the smaller element to the merged array and move the counter for that array forward
//         if (arr1[i] < arr2[j]) {
//             mergedArr.push_back(arr1[i]);
//             i++;
//         } else {
//             mergedArr.push_back(arr2[j]);
//             j++;
//         }
//     }

//   * add the remaining elements of arr1 to the merged array
//     while (i < arr1.size()) {
//         mergedArr.push_back(arr1[i]);
//         i++;
//     }

//   *add the remaining elements of arr2 to the merged array
//     while (j < arr2.size()) {
//         mergedArr.push_back(arr2[j]);
//         j++;
//     }

//     return mergedArr; // return the merged array
// }

// int main() {
//  *example usage
//     vector<int> arr1 = {1, 3, 5, 7, 9};
//     vector<int> arr2 = {2, 4, 6, 8, 10};
//     vector<int> mergedArr = mergeArrays(arr1, arr2);

//  * print the merged array
//     for (int i = 0; i < mergedArr.size(); i++) {
//         cout << mergedArr[i] << " ";
//     }
//     cout << endl;

//     return 0;
// }
