#include<iostream>
using namespace std;

    /*
  todo: reverse the order of the number input by the user
*/

int main(){
    int number;
    cout << "Enter the number: ";  // Prompt the user to enter a number
    cin >> number;                 // Read the number from user input
    int ans = 0;                   // Initialize the variable ans to 0
    while(number!=0){              // Loop until all digits of the number are processed
        int reverse = number % 10;  // Extract the last digit of the number using modulus operator
        if((ans> INT16_MAX/10)||(ans<INT16_MIN/10)){
            return 0;
        }

        ans = (ans * 10) + reverse;  // Reverse the number by adding the extracted digit to ans after multiplying it by 10
        number /= 10;              // Remove the last digit from the number using integer division
    }
    cout << "Reversed number is: " << ans << endl;  // Print the reversed number
}
