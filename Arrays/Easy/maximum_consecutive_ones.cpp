#include <bits/stdc++.h>
using namespace std;
int maximum_ones(vector<int> &arr){
    int maxi = 0,count = 0;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] == 1){
            count ++;
            maxi = (count > maxi) ? count : maxi;
        }
        else count = 0;
    }
    return maxi;
}

// TC --> O(N);
// SC --> O(1);
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << maximum_ones(arr);
    return 0;
}