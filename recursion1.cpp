<<<<<<< HEAD
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  // ! Recursion

//todo:Given an integer , find the sum of its digits using the recursion;
int findSum(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    }
    int sum = findSum(n / 10) + findSum(n % 10);
    return sum;
}

  //todo: Given two numbers p & q,find the value of p^q usinf a recursive function;
 int findPower(int p,int q){
if (q==1){
        return p;
}
if(q==0){
        return 1;
}
int power = p* findPower(p,q-1);
return power;
 }

int main()
{ //* for first question
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = findSum(n);
    cout << result;

    //* for second question
    int p, q;
    cout << "Enter the value of p(base) and q(exponent): ";
    cin >> p >> q;
    int power = findPower(p, q);
    cout << power << endl;

    return 0;
=======
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
  // ! Recursion

//todo:Given an integer , find the sum of its digits using the recursion;
int findSum(int n)
{
    if (n >= 0 && n <= 9)
    {
        return n;
    }
    int sum = findSum(n / 10) + findSum(n % 10);
    return sum;
}

  //todo: Given two numbers p & q,find the value of p^q usinf a recursive function;
 int findPower(int p,int q){
if (q==1){
        return p;
}
if(q==0){
        return 1;
}
int power = p* findPower(p,q-1);
return power;
 }

int main()
{ //* for first question
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int result = findSum(n);
    cout << result;

    //* for second question
    int p, q;
    cout << "Enter the value of p(base) and q(exponent): ";
    cin >> p >> q;
    int power = findPower(p, q);
    cout << power << endl;

    return 0;
>>>>>>> 48a022f23e771806152f711bc2d69a7f262ba3ce
}