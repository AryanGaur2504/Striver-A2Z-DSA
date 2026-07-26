#include <iostream>
using namespace std;
void complement(int &n){
    if(n == 0){
        n = 1;
    }
    else if(n==1){
        n = 0;
    }
}
void pattern(int n){
    int flag;
    for(int i=0;i<n;i++){
        if(i%2==0) flag = 1;
        else flag =0;
        for(int j=0;j<=i;j++){
            cout << flag;
            complement(flag);
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
}