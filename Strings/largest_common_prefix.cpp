#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// todo: Given an array of strings. Write a program to find the largest common prefix string amongst an array of strings
//? input: str=["flower","flight","flask"]      output: "Fl"

string longestCommonPrefix(vector<string> &str)
{
    // sort the strings and compare the first and last word only
    sort(str.begin(), str.end());    
    string s1 = str[0];              // for first word
    string s2 = str[str.size() - 1]; // for last word
    int i = 0, j = 0;

    string ans = " ";
    while (i < s1.size() && j < s2.size())
    {
        if (s1[i] == s2[j])
        {                 // if char at  i and j index in first and last string is same
            ans += s1[i]; // ans = ans + s1[i];
            i++;
            j++;
        }
        else
        {
            break;
        }
    }
    return ans;
} //time complexity  O(nlogn*m)

string longestCommonPrefix_2(vector<string> &str)
{
    // taking first string as constant and comparing other string with it
    string s1 = str[0];
    int ans_length = s1.size();
    for (int i = 1; i < str.size(); i++)
    {
        int j = 0;
        while (j < s1.size() && j < str[i].size() && s1[j] == str[i][j])

            j++;
        ans_length = min(ans_length, j);  // finding the common prefix sting length
        
    }
    string ans = s1.substr(0, ans_length);

    return ans;
} // time complexity O(nm)
int main()
{
    int n;
    cout << "Enter number of words you want to enter : ";
    cin >> n;
    cout << "enter words: ";
    vector<string> str(n);
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    cout << " The input string is: ";
    for (int i = 0; i < n; i++)
    {
        cout << str[i] << " ";
    }
    cout << "\n"
         << "Longest common prefix is: " << longestCommonPrefix(str) << endl
         << "Longest common prefix using second method  is: " << longestCommonPrefix_2(str) << endl;

    return 0;
}