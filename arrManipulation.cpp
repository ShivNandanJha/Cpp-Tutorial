#include <iostream>
using namespace std;

//todo:find the unique number in a given array where all the elements are being repeated twice with one value being unique

void printUnique(int array[], int size) {
  for (int i = 0; i < size; i++) {
    for (int j = i + 1; j < size; j++) {
      if (array[i] == array[j]) {
        array[i] = array[j] = -1;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    if (array[i] > 0) {
      cout << array[i] << endl;
    }
  }
}



int main() {
  int arr[] = {2, 3, 1, 3, 4, 2, 1, 4, 5};
  int size  = sizeof(arr) / sizeof(arr[0]);
  printUnique(arr, size);
  return 0;
}

