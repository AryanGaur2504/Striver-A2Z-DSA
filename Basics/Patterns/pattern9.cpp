#include <iostream>
using namespace std;
void pattern(int n){
   for(int i=1;i<=2*n;i++){
    if(i<=n){
        for(int j=0;j<n-i;j++){
            cout <<" ";
        }
        for(int k=0;k<2*i-1;k++){
            cout<<"*";
        }
        cout << endl;
    }
    else{
          for(int j=0;j<i-(n+1);j++){
            cout <<" ";
        }
        for(int k=0;k<2*(2*n-i+1)-1;k++){
            cout<<"*";
        }
        cout << endl;
    }
    }
   }
int main(){
    int n;
    cin >> n;
    pattern(n);
    return 0;
}