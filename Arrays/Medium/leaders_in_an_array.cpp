#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<int> leaders_in_array(vector<int> &arr){
//     vector<int> leaders_array;
//     for(int i = 0;i < arr.size();i++){
//         bool leader = true;
//         for(int j = i+1;j < arr.size();j++){
//             if(arr[j] > arr[i]){
//                 leader = false;
//             }
//         }
//         if(leader) leaders_array.push_back(arr[i]); 
//     }
//     return leaders_array;
// }
vector<int> leaders_in_array(vector<int> &arr){
    vector<int> answer;
    int max = INT_MIN;
    for(int i = arr.size() - 1;i > 0;i--){
        if(arr[i] > max){
            max = arr[i];
            answer.push_back(arr[i]);
        }
    }
    return answer;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < arr.size();i++) cin >> arr[i];
    vector<int> answer = leaders_in_array(arr);
    for(int i = 0;i < answer.size();i++) cout << answer[i] << "\t";
    return 0;
}