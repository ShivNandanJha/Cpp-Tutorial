<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// todo: Given an array of names of the fruit ; you are supposed to sort in lexicographical order using the selection sort
//?? input: ["papaya"," apple", "orange ", "lime","Mango"," kiwi"]
//?? output: [" apple"," kiwi","lime","Mango","orange ","papaya"]

// Function to perform selection sort on the given vector
void selectionSort(vector<string> &arr)
{
    int n = arr.size(); // Get the size of the vector
    for (int i = 0; i < n - 1; i++)
    {                   // Loop through the vector
        int minIdx = i; // Initialize the minimum index as the current index
        for (int j = i + 1; j < n; j++)
        { // Loop through the unsorted portion of the vector
            if (arr[j] < arr[minIdx])
            {               // If the current element is smaller than the minimum element
                minIdx = j; // Update the minimum index to the current index
            }
        }
        if (minIdx != i)
        {                              // If the minimum index has changed
            swap(arr[i], arr[minIdx]); // Swap the current element with the minimum element
        }
    }
}

int main()
{
    vector<string> fruits = {"papaya", " apple", "orange ", "lime", "Mango", " kiwi"}; // Initialize the input vector
    selectionSort(fruits);                                                             // Call the selectionSort function to sort the vector
    for (string fruit : fruits)
    {                         // Loop through the sorted vector
        cout << fruit <<" , "; // Print each element separated by a space
    }
    cout << endl; // Print a new line at the end
    return 0;     // Return 0 to indicate successful execution
}
=======
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// todo: Given an array of names of the fruit ; you are supposed to sort in lexicographical order using the selection sort
//?? input: ["papaya"," apple", "orange ", "lime","Mango"," kiwi"]
//?? output: [" apple"," kiwi","lime","Mango","orange ","papaya"]

// Function to perform selection sort on the given vector
void selectionSort(vector<string> &arr)
{
    int n = arr.size(); // Get the size of the vector
    for (int i = 0; i < n - 1; i++)
    {                   // Loop through the vector
        int minIdx = i; // Initialize the minimum index as the current index
        for (int j = i + 1; j < n; j++)
        { // Loop through the unsorted portion of the vector
            if (arr[j] < arr[minIdx])
            {               // If the current element is smaller than the minimum element
                minIdx = j; // Update the minimum index to the current index
            }
        }
        if (minIdx != i)
        {                              // If the minimum index has changed
            swap(arr[i], arr[minIdx]); // Swap the current element with the minimum element
        }
    }
}

int main()
{
    vector<string> fruits = {"papaya", " apple", "orange ", "lime", "Mango", " kiwi"}; // Initialize the input vector
    selectionSort(fruits);                                                             // Call the selectionSort function to sort the vector
    for (string fruit : fruits)
    {                         // Loop through the sorted vector
        cout << fruit <<" , "; // Print each element separated by a space
    }
    cout << endl; // Print a new line at the end
    return 0;     // Return 0 to indicate successful execution
}
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
