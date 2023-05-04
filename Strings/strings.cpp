#include <iostream>  // Standard Input/Output Stream Library
#include <string>    // String Library
#include<algorithm>
using    namespace std;  // Standard namespace

int main()
{
    // Declaration and initialization of strings
  string s1 = "Hello, world!";
  string s2 = "I love C++ programming!";

    // Printing the strings
  cout << "s1: " << s1 << endl;
  cout << "s2: " << s2 << endl;

    // String length
  cout << "\nString Length:\n";
  cout << "s1 length: " << s1.length() << endl;
  cout << "s2 length: " << s2.length() << endl;

    // String concatenation
  cout << "\nString Concatenation:\n";
  string s3 = s1 + " " + s2;
  cout << "s3: " << s3 << endl;

    // String comparison
  cout << "\nString Comparison:\n";
  string s4 = "Hello, world!";
  string s5 = "hello, world!";
  if (s4 == s5)
    cout << "s4 and s5 are equal.\n";
  else
    cout << "s4 and s5 are not equal.\n";

    // String finding
  cout << "\nString Finding:\n";
  string s6 = "programming";
  size_t pos = s2.find(s6);
  if (pos != string::npos)
    cout << "s6 found in s2 at position " << pos << endl;
  else
    cout << "s6 not found in s2.\n";

  // Substring extraction
  cout << "\nSubstring Extraction:\n";
  string s7 = s1.substr(0, 5); // Extract the first 5 characters of s1
  cout << "s7: " << s7 << endl;

  // String manipulation
  cout << "\nString Manipulation:\n";
  string s8 = "     C++ is awesome!     ";
  cout << "s8 before trim: " << s8 << endl;
  s8.erase(0, s8.find_first_not_of(" "));
  s8.erase(s8.find_last_not_of(" ") + 1);
  cout << "s8 after trim: " << s8 << endl;
  transform(s8.begin(), s8.end(), s8.begin(), ::tolower);
  cout << "s8 in lowercase: " << s8 << endl;

  return 0;
}
