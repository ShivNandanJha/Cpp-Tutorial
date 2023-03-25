#include<iostream>
using namespace std;

// todo: Check if the array is sorted or not

int main(){
    int  array[] = {1, 2, 8, 3, 5, 6};
    bool sorted  = true;
    for (int i=1; i<6; i++){
        if(array[i]<=array[i-1]){// checking if array is not sorted,assuming that it sorted before.
            sorted = false;
        }
       
    }
    cout << sorted << endl;
}