<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  //todo: Write a program to check whether a given number is palindrome or not
bool f(int num, int *temp){
    //base case
    if (num>= 0 and num<=9){
        int lastdigit = (*temp) % 10;
         (*temp) /=10;
        return (num == lastdigit);
    }

    bool result  = (f(num / 10, temp) and (num % 10) == ((*temp) % 10));
         *temp  /= 10;
         return result;
}

int main(){
         int n          = 12621;
         int anothernum = n;
         int *temp = &anothernum;
         cout << f(n, temp);

         return 0;

=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  //todo: Write a program to check whether a given number is palindrome or not
bool f(int num, int *temp){
    //base case
    if (num>= 0 and num<=9){
        int lastdigit = (*temp) % 10;
         (*temp) /=10;
        return (num == lastdigit);
    }

    bool result  = (f(num / 10, temp) and (num % 10) == ((*temp) % 10));
         *temp  /= 10;
         return result;
}

int main(){
         int n          = 12621;
         int anothernum = n;
         int *temp = &anothernum;
         cout << f(n, temp);

         return 0;

>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
}