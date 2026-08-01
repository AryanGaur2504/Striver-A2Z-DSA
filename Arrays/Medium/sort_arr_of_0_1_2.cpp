#include<bits/stdc++.h>
using namespace std;
// Brute
// void sort_arr(vector<int> &arr){
//     sort(arr.begin(),arr.end()); (Or Any Other Technq.)
// }

// Better
// void sort_arr(vector<int> &arr){
//     int count0 = 0, count1 = 0, count2 = 0;
//     for(int i = 0;i < arr.size();i++){
//         if(arr[i] == 0) count0 ++;
//         else if(arr[i] == 1) count1 ++;
//         else count2 ++;
//     }
//     for(int i = 0;i < count0;i++){
//         arr[i] = 0;
//     }
//     for(int i = count0;i < count0+count1;i++){
//         arr[i] = 1;
//     }
//     for(int i = count0+count1;i < arr.size();i++){
//         arr[i] = 2;
//     }
// }

//Optimal
void sort_arr(vector<int> &arr){
    int low = 0,mid = 0,high = arr.size() - 1;
    while(mid <= high){
        if(arr[mid] == 1){
            mid ++;
        }
        else if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    sort_arr(arr);
    for(int i = 0;i < size;i++) cout << arr[i] << "\t";
    return 0;
}