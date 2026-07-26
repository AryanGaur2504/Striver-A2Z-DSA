#include <iostream>
using namespace std;
void input_array(int arr[],int n){
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    input_array(arr,n);
    int hash[10] = {0};
    for(int i = 0;i < n;i++){
        hash[arr[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int t;
        cin >> t;
        cout << hash[t] << endl;
    }
    return 0;
}