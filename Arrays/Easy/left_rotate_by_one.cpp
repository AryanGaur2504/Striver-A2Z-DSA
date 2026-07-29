#include <bits/stdc++.h>
using namespace std;
void left_rotate_by_one(vector<int> &arr){
    int temp = arr[0];
    int i = 0;
    for(i = 0;i < arr.size()-1;i++){
        arr[i] = arr[i+1];
    }
    arr[i] = temp;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    left_rotate_by_one(arr);
    for(int i = 0;i < size;i++) cout << arr[i] << "\t";
    return 0;
}