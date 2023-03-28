      #include<iostream>  //include the header file for input/output stream
using namespace std;      //use standard namespace

  //todo: count the number of pairs whose sum is equal to given value of x

int main(){ //start of the main function
int    arr[] = {2, 4, 5, 7, 9, 55, 64, 22, 3, 1, 28, 90};  //declare and initialize an array of integers
int    n = sizeof(arr)/sizeof(arr[0]);                     //find the size of the array
int    x;                                                  //declare a variable to store the given number
cout<<"Enter the number: "<<endl;                          //prompt the user to enter the number
cin    >> x;                                               //read the value of x from user
int    count = 0;                                          //initialize the count variable to zero
for(int i=0; i<n; i++){ //start of the outer loop, which iterates through each element of the array
for(int j = i + 1; j < n;j++){ //start of the inner loop, which iterates through each element after the current element of the outer loop
if(arr[i]+arr[j]==x){ //check if the sum of the current element and the next element equals x
count++;  //if so, increment the count variable
}
}
}
cout << count << endl;  //display the count of pairs whose sum equals x
     }  //end of the main function