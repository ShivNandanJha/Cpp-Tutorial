#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// todo:Given a string 'str' , output the sorted string .
//? input: avacardo   output: aaacdorv
//* https://leetcode.com/problems/sort-characters-by-frequency/

string sortString(string str)
{
    vector<int> freq(26, 0);
    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        freq[index]++;
    }

    int j = 0;
      // create sorted string
    for (int i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            str[j++] = i + 'a';
        }
    }

    return str;
}

int main()
{
    string str;
    getline(cin, str);
    cout << sortString(str) << endl;
    return 0;
}