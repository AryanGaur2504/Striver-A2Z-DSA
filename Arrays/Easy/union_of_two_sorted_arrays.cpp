#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<int> union_of_arrays(vector<int> &arr1,vector<int> &arr2){
//     vector<int> union_arr;
//     set<int> st;
//     for(int i = 0;i < arr1.size();i++){
//         st.insert(arr1[i]);
//     }
//     for(int i = 0;i < arr2.size();i++){
//         st.insert(arr2[i]);
//     }
//     for(auto it : st){
//         union_arr.push_back(it);
//     }
//     return union_arr;
// }

//Optimal
vector<int> union_of_arrays(vector<int> &arr1,vector<int> &arr2){
    vector<int> union_arr;
    int i = 0;
    int j = 0;
    while(i < arr1.size() && j < arr2.size()){
        if(arr1[i] <= arr2[j]){
            if(union_arr.size() == 0 || arr1[i] != union_arr.back()){
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(union_arr.size() == 0 || arr2[j] != union_arr.back()){
                union_arr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i < arr1.size()){
        if(arr1[i] <= arr2[j]){
            if(union_arr.size() == 0 || arr1[i] != union_arr.back()){
                union_arr.push_back(arr1[i]);
            }
            i++;
        }
    }
    while(j < arr2.size()){
        if(union_arr.size() == 0 || arr2[j] != union_arr.back()){
            union_arr.push_back(arr2[j]);
        }
            j++;
    }
    return union_arr;
}

int main(){
    int n1,n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1);
    vector<int> arr2(n2);
    for(int i = 0;i < n1;i++) cin >> arr1[i];
    for(int i = 0;i < n2;i++) cin >> arr2[i];
    vector<int> union_arr = union_of_arrays(arr1,arr2);
    for(int i = 0;i < union_arr.size();i++) cout << union_arr[i] << "\t";
    return 0;
}