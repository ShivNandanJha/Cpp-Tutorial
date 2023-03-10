#include <iostream>
#include <algorithm>
using namespace std;

/*
todo: search if a given element is present in the array or not.
*/

int main() {
    int arr[] = {2, 4, 5, 7, 9, 55, 64, 22, 3, 100, 28, 90};
    int n;
    cout << "Enter the number to serach for: ";
    cin >> n;

    auto found = find(begin(arr), end(arr), n);
    if(found!=end(arr)){
        cout << "1\n";
    }
    else{
        cout << "-1\n";
    }

    return 0;
}
