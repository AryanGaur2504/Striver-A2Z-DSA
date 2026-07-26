#include <iostream>
#include <string.h>
using namespace std;
bool palin(int l,string s,int r){
    if(l >= r) return true;
    if(s[l] != s[r]) return false;
    return palin(l+1,s,r-1);
}
int main(){
    string s;
    cin >> s;
    if(palin(0,s,s.length()-1)) cout << "Palindrome";
    else cout << "Not Palindrome\t" ;
    return 0;
}