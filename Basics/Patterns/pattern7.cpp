#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=0;j<n-i;j++){
            cout << " ";
        }
        for(int k=0;k<2*i-1;k++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}