#include <bits/stdc++.h>
using namespace std;
// Brute
// bool linear_search(vector<int> &arr,int x){
//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] == x) return true;
//     }
//     return false;
// }
// int longest_consecutive_sequence(vector<int> &arr){
//     if(arr.size() == 0) return 0;
//     int longest = INT_MIN;
//     for(int i = 0;i < arr.size();i++){
//         int x = arr[i];
//         int count = 1;
//         while(linear_search(arr,x+1)){
//             x++;
//             count++;
//         }
//         longest = max(count,longest);
//     }
//     return longest;
// }

// TC --> O(N*N);
// SC --> O(1);

// Better

// int longest_consecutive_sequence(vector<int> &arr){
//     if(arr.empty()) return 0;
//     sort(arr.begin(),arr.end());
//     int longest = 1;
//     int count = 1;
//     for(int i = 1;i < arr.size();i++){
//         if(arr[i] == arr[i-1] + 1){
//             count++;
//         }
//         else if(arr[i] != arr[i-1]){
//             count = 1;
//         }
//         longest = max(longest,count);
//     }
//     return longest;
// }

// TC --> O(N LogN + N);
// SC --> O(1);

// Optimal
int longest_consecutive_sequence(vector<int> &arr){
    if(arr.empty()) return 0;
    int longest = 1;
    unordered_set<int> st;
    for(int i = 0;i < arr.size();i++){
        st.insert(arr[i]);
    }
    for(auto it : st){
        int count = 1;
        if(st.find(it - 1) != st.end()){}
        else{
            int x = it;
            while(st.find(x+1) != st.end()){
                count++;
                x++;
            }
        }
        longest = max(count,longest);
    }
    return longest;
}
// TC --> O(N) **ASSUMING NO COLLISIONS**
// SC --> O(N)
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << longest_consecutive_sequence(arr);
    return 0;
}