#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        //Gaps
        for(int j=0;j<(n-i);j++){
            cout << " ";
        }
        //Normal Order
        for(char k='A';k<'A'+i;k++){
            cout << k;
        }
        //Reverse Order
        for(char l='A'+i-2;l>='A';l--){
           cout << l;
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
}