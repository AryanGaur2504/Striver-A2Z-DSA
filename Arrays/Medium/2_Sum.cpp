#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<int> two_sum(vector<int> &arr,int &sum){
//     for(int i = 0;i < arr.size();i++){
//         for(int j = i + 1;j < arr.size();j++){
//             if(arr[i] + arr[j] == sum) return{i,j};
//         }
//     }
//     return {-1,-1};
// }

//Better + Optimal(For Variety - 1)
vector<int> two_sum(vector<int> &arr,int&sum){
    map<int,int> mpp;
    for(int i = 0;i < arr.size();i++){
        int req = sum - arr[i];
        if(mpp.find(req) == mpp.end()){
            mpp[arr[i]] = i;
        }
        else{
            return{mpp[req],i};
        }
    }
    return {-1,-1};
}

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < arr.size();i++) cin >> arr[i];
    int sum;
    cin >> sum;
    vector<int> position_arr = two_sum(arr,sum);
    for(int i = 0;i < position_arr.size();i++) cout << position_arr[i] << "\t";
    return 0;
}