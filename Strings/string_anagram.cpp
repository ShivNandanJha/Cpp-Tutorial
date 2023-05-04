#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;


  // todo: Given two string str1 and str2, return true if str2 is an anagram of str1, and false otherwise;
  //? input: str1 ='anagram' str2='nagaram'    output: YES
  //? input: str1 ='bank' str2='king'    output: NO
  //? An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.
  //* https://leetcode.com/problems/valid-anagram/



// Define a function to check if two strings are anagrams
bool isAnagram(string s, string t)
{
    // If the two strings have different lengths, they cannot be anagrams
    if (s.length() != t.length())
    {
        return false;
    }

    // Initialize an array to store the count of each character in the strings
    int counts[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        // Increment the count of the character in the first string
        counts[s[i] - 'a']++;
        // Decrement the count of the character in the second string
        counts[t[i] - 'a']--;
    }

    // Check if any count in the array is non-zero; if so, the strings are not anagrams
    for (int count : counts)
    {
        if (count != 0)
        {
            return false;
        }
    }

    // If all counts are zero, the strings are anagrams
    return true;
}

int main()
{
    // Test the isAnagram function with example strings
    string str1 = "anagram";
    string str2 = "nagara";
    cout << isAnagram(str1, str2) << endl;

    return 0;
}
