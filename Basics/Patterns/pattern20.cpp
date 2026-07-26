#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<2*n;i++){
        int stars=i;
        int gaps = 2*(n-i);
        if(i>n){ 
        stars = 2*n-i;
        gaps = 2*(i-n);
        }
        //*
        for(int j=0;j<stars;j++){
            cout << "*";
        }
        // " "
        for(int k=0;k<gaps;k++){
            cout << " ";
        }
        //*
        for(int l=0;l<stars;l++){
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