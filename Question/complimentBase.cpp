#include<iostream>
using namespace std;

  //? the compliment of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
  //? For example, the integer 5 is "101" in binary and its compliment is "010" in binary.
  //todo: Given an integer n, return its compliment. (leetcode 1009: compliment of base 10 integer)

int main(){
    int n;
    int mask = 0;
    int m    = n;
    while (m!=0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}