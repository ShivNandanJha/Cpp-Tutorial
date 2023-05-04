#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// todo: Given Two strings s and t, determine if they are isomorphic.
/*
 * Two strings s and t are isomorphic if the characters in s can be replaced to get t.
 *All occurrences of a character must be replaced with another character while preserving the
 * order of characters. No two characters may map to the same character, but a character may map to itself.
 */
//? input: s="egg"   t="odd"     output: YES
//? input: s="app"  t="web"   output: NO

//*https://leetcode.com/problems/isomorphic-strings/


bool isIsomorphic(string s, string t) {
    if (s.size() != t.size()) return false;  // if the strings are of different length, they can't be isomorphic
    vector<int> v1(128, -1);
    vector<int> v2(128, -1);

    for (int i = 0; i < s.size();i++){
        if(v1[s[i]] != v2[t[i]]){
            return false;
        }
        else{
            v1[s[i]] = v2[t[i]] = i;
        }
    }

        return true; // if all characters are successfully mapped, the strings are isomorphic
}

int main() {
    string s1 = "egg";
    string t1 = "add";
    cout << isIsomorphic(s1, t1) << endl; // expected output: 1 (true)

    string s2 = "foo";
    string t2 = "bar";
    cout << isIsomorphic(s2, t2) << endl; // expected output: 0 (false)

    string s3 = "paper";
    string t3 = "title";
    cout << isIsomorphic(s3, t3) << endl; // expected output: 1 (true)

    return 0;
}
