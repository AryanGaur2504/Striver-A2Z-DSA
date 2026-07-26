#include <iostream>
using namespace std;
int print(int i,int n){
    if(i > n) return -1;
    print(i+1,n);
    cout << i <<endl;
}

int test(int i,int n){
    if(i < 1) return -1;
    test(i-1,n);
    cout << i << endl;
}

int main(){
    int n;
    cin >> n;
    print(1,n);
    cout << "Below Is 1-n above is n-1 with back trace" << endl;
    test(n,n);
    return 0;
}
//Back Track --> Last Would Be Printed First (i- is not allowed only i+)