#include <iostream>
using namespace std;
int reverse(int n){
    int rev = 0;
    while(n!=0){
        rev = (rev*10) + (n%10);
        n/=10;
    }
    return rev;
}
bool ispalindrome(int n){
    if(n == reverse(n)) return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    for(int j=0;j<t;j++){
        int i;
        cin >> i;
        if(ispalindrome(i)) cout << "Palindrome";
        else cout << "Not Palindrome";
        cout << endl;
    }
    return 0;
}