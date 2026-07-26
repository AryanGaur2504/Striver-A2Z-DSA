#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
                cout << j;
            }
        for(int k=0;k<2*(n-i);k++){
            cout << " ";
        }
        for(int l=i;l>=1;l--){
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