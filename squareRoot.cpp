#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  // todo: find the square root of the given non negative integer value x. Round it off to the nearesr float integer value.
  //! Interpolation Search



int sqaureRoot(int target)
{                      // define a function to find the square root of a given target
    int low = 0;       // initialize the lower bound of the search range to 0
    int high = target; // initialize the upper bound of the search range to the target
    int ans = -1;      // initialize the answer variable to -1
    while (low <= high)
    {                                     // loop until the lower bound is less than or equal to the upper bound
        int mid = low + (high - low) / 2;  // calculate the middle point of the search range using interpolation formula
        if (mid * mid <= target)
        {                  // check if the square of the middle point is less than or equal to the target
            ans = mid;     // update the answer variable to the middle point
            low = mid + 1; // update the lower bound to one more than the middle point
        }
        else
        {                   // otherwise, if the square of the middle point is greater than the target
            high = mid - 1; // update the upper bound to one less than the middle point
        }
    }
    return ans; // return the answer variable as the square root of the target
}

int main() // define the main function
{
    int target;                                                        // declare a variable to store the target value
    cout << "Enter the number for which square root is to be found: "; // print a message to prompt the user for input
    cin >> target;                                                     // read the input from the user and store it in the target variable
    cout << sqaureRoot(target);                                        // print the result of calling the squareRoot function with the target value

    return 0; // return 0 to indicate successful execution of the program
}
