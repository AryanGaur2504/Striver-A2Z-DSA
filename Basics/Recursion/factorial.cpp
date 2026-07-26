#include <iostream>
using namespace std;
int fact(int n){
    if(n == 0 || n==1 ) return 1;
    else return(n*fact(n-1));
}

int fact_2(int i,int fact){
    if(i < 1) return fact;
    return fact_2(i-1,fact*i);
}
int main(){
    int n;
    cin >> n;
    // cout << fact(n);
    cout << fact_2(5,1);
    return 0;
}