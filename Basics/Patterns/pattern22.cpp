#include <iostream>
#include <cmath>
using namespace std;
void pattern(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
                for(int x=0;x<=n-1;x++){
                    if(i==x||i==(2*n-2-x)||j==x||j==(2*n-2-x)){
                        cout << (n-x);
                        break;
                    }
                }
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    pattern(n);
}