#include <iostream>
using namespace std;
void pattern(int n){
    int flag = 1;
for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
        cout << flag << " ";
        flag++;
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
