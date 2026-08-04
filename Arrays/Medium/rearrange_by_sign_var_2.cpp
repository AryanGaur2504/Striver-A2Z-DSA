#include <bits/stdc++.h>
using namespace std;
vector<int> rearrange_by_sign(vector<int> &arr){
    vector<int> ans(arr.size());
    vector<int> positive;
    vector<int> negative;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] < 0) negative.push_back(arr[i]);
        else positive.push_back(arr[i]);
    }
    if(positive.size() > negative.size()){
        for(int i = 0;i < negative.size();i++){
            ans[2*i] = positive[i];
            ans[2*i+1] = negative[i];
        }
        for(int i = negative.size();i < positive.size();i++){
            ans[i+negative.size()] = positive[i];
        }
    }
    else{
        for(int i = 0;i < positive.size();i++){
            ans[2*i] = positive[i];
            ans[2*i+1] = negative[i];
        }
        for(int i = positive.size();i < negative.size();i++){
            ans[i+positive.size()] = negative[i];
        }
    }
    return ans;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i <arr.size();i++) cin >> arr[i];
    vector<int> ans = rearrange_by_sign(arr);
    for(int i = 0;i < size;i++)  cout << ans[i] << "\t";
    return 0;
}