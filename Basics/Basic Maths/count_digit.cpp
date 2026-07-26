#include <iostream>
using namespace std;
int count_digits(int n){
    int digits = 0;
    while(n>0){
        digits++;
        n/=10;
    }
    return digits;
}
int main(){
    int n;
    cin >> n;
    cout << count_digits(n);
    return 0;
}