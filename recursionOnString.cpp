#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

  // todo: Remove All the occurence of 'a' from a string s='aeroplane' using recursive function;
string removeA(string &s,int i, int n){
    if(i==n){
        return" ";
    }
    string curr  = " ";
           curr += s[i];
    return((s[i]=='a')?" _ " : curr)+removeA(s,i+1,n);
}



int main(){
string s = "keaeroplane";
int    i = 0;
int n = 11;
cout<<removeA(s, i, n);

return 0;
}