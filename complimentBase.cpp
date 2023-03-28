#include <iostream>
using namespace std;

//? the compliment of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
//? For example, the integer 5 is "101" in binary and its compliment is "010" in binary.
// todo: Given an integer n, return its compliment. (leetcode 1009: compliment of base 10 integer)

int findComplement(int n)
{
  int mask = ~0; // create a mask with all bits set to 1
  if (n == 0)
  {
    return 1;
  }
  while (n & mask)
  {             // loop until mask has leading zeros equal to n
    mask <<= 1; // shift mask left by one bit
  }
  return ~n & ~mask; // complement n and the mask to get the final result
}

int main()
{
  int n;
  cout<<"Enter the number:";
  cin >> n;                                                          // set the input value
  int complement = findComplement(n);                                // compute the complement
  cout << "The complement of " << n << " is " << complement << endl; // print the result
  return 0;
}
