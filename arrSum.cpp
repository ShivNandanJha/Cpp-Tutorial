#include <iostream>
using namespace std;

// todo: find the difference between the sum of elements at even indices and sum of elements at odd indices

int main()
{
    int array[] = {2, 4, 2, 4, 2, 4};
    int ans = 0;
    for (int i = 0; i < 6; i++)
    {
        if (i % 2 == 0)
        {
            ans += array[i];
        }
        else
        {
            ans -= array[i];
        }
    }
    cout << "the Difference is: " << ans << endl;
}
