#include<iostream>
#include<vector>
using namespace std;

  /* 
  todo: This program finds the number of occurrence of a number greater than the number input by the user from an array.
*/

int main() {
    vector<int> v(6);

    for (int i= 0; i < v.size();i++){
 cin >> v[i];
    }

 cout << "Enter number: " << endl;  // Ask the user to input a number to find the last occurrence of
    int x;
    cin >> x;

    int occurred =0;

    for (int i = 0; i < v.size(); i++)
    { 
        if (v[i] > x)
        {
            occurred ++;
        }
    }    cout << occurred << endl;
        return 0;
}
