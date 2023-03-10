#include <iostream>
using namespace std;

int fun(int z){
     z = 100;
    return z;
}

int main()
{
    int a = 200;
    fun(a);
  
    cout << a << endl;
    // cout << &a << endl;

    return 0;
}