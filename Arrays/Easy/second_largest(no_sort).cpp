#include <bits/stdc++.h>
using namespace std;
// Brute
// int second_largest_element(vector<int> &arr){
//     int largest = arr[0];
//     int second_largest = INT_MIN;
//     //Finding Max
//     for(int i = 0;i < arr.size();i++){
//         if(largest < arr[i]) largest = arr[i];
//     }
//     //Finding SMax
//     for(int i = 0;i < arr.size();i++){
//         if(second_largest < arr[i] && arr[i] < largest) second_largest = arr[i];
//     }
//     return second_largest;
// }
// TC --> O(2N);
// SC --> O(1);

int second_largest_element(vector<int> &arr){
    int largest = arr[0];
    int second_largest = INT_MIN;
    for(int i = 0;i < arr.size();i++){
        if(largest < arr[i]){
            second_largest = largest;
            largest = arr[i];
        }
        else if(second_largest < arr[i] && arr[i] != largest) second_largest = arr[i];
    }
    return second_largest;
}
// TC --> O(N);
// SC --> O(1);
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    cout << second_largest_element(arr);
    return 0;
}