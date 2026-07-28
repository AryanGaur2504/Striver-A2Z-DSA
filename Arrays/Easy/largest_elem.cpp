#include <bits/stdc++.h>
using namespace std;
//Brute
// int largest_element(vector<int> &arr){
//     sort(arr.begin(),arr.end());
//     return arr[arr.size()-1];
// }
// TC --> O(N log N);
// SC --> O(1);


//Optimal

// int largest_element(vector<int> &arr){
//     int largest = arr[0];
//     for(int i = 0;i < arr.size();i++){
//         if(largest < arr[i]) largest = arr[i];
//     }
//     return largest;
// }
// TC --> O(N);
// SC --> O(1);

int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    cout << largest_element(arr);
    return 0;
}
