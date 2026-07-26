#include <iostream>
using namespace std;
void patt_dw(int n){
for(int i=0;i<n;i++){
    int stars = (n-i);
    //*
    for(int j=0;j<stars;j++){
        cout<<"*";
    }
    //" "
    for(int k=0;k<2*i;k++){
        cout << " ";
    }
    //*
    for(int l=0;l<stars;l++){
        cout << "*";
    }
    cout << endl;
}
}
void patt_up(int n){
    for(int i=0;i<n;i++){
        //*
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        // " "
        for(int k=0;k<2*(n-1-i);k++){
            cout << " ";
        }
        // *
        for(int l=0;l<=i;l++){
            cout << "*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    patt_dw(n);
    patt_up(n);
    return 0;
}