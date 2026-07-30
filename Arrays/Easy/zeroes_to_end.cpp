#include <bits/stdc++.h>
using namespace std;
// Brute
void move_zeroes_to_end(vector<int> &arr){
    vector<int> non_zero;
    for(int i = 0;i < arr.size();i++){
        if(arr[i] != 0) non_zero.push_back(arr[i]);
    }
    for(int i = 0;i < non_zero.size();i++){
        arr[i] = non_zero[i];
    }
    for(int i = non_zero.size();i < arr.size();i++){
        arr[i] = 0;
    }
}
// Optimal
// void move_zeroes_to_end(vector<int> &arr){
//     //First Occurence Of Zero
//     int occ = -1;
//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] == 0) {
//             occ = i;
//             break;
//         }
//     }
//     if(occ == -1) return;
//     int i = occ,j = i+1;
//     while(i < j && j < arr.size()){
//         if(arr[j] != 0){
//             swap(arr[i],arr[j]);
//             i++;
//         }
//         j++;
//     }
// }
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    move_zeroes_to_end(arr);
    for(int i = 0;i < size;i++) cout << arr[i] << "\t";
    return 0;
}