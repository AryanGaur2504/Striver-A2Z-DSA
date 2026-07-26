#include <iostream>
using namespace std;
int sum(int n){
    if(n == 1) return n;
    else return(n+sum(n-1));
}
int striver_sum(int i,int sum){//(N,initial sum)
    if(i < 1) return sum;
    return (i-1,sum+i);
}
int main(){
    int n;
    cin >> n;
    cout << sum(n) << endl;
    cout << striver_sum(100,0);
    return 0;
}