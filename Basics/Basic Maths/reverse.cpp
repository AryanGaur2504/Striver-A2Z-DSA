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
int main(){
    int t;
    cin >> t;
    for(int i=0;i<t;i++){
    int n;
    cin >> n;
    cout << reverse(n) << endl;
    }
    return 0;
}