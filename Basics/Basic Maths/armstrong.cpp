#include <iostream>
#include <cmath>
using namespace std;
int count_digits(int n){
    int digits = 0;
    while(n>0){
        digits++;
        n/=10;
    }
}
bool is_armstrong(int n){
    int x = n;
    int sum = 0;
    int digits = count_digits(n);
    while(x!=0){
        sum+=pow(x%10,digits);
        x/=10;
    }
    if(sum == n) return true;
    return false;
}
int main(){
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        if(is_armstrong(n)) cout << "Armstrong";
        else cout << "Not Armstrong";
        cout << endl;
    }
    return 0;
}