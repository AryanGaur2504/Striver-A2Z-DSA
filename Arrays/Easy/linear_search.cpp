#include <bits/stdc++.h>
using namespace std;
int linear_search(vector<int> &arr,int x){
    int index = -1;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == x) index = i;
    }
    return index;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    int x;
    cin >> x;
    cout << linear_search(arr,x);
}