// Brute(Using Set)

// #include <bits/stdc++.h>
// using namespace std;
// set<int> remove_duplicates(vector<int> &arr){
//     set<int> st;
//     for(int i = 0;i < arr.size();i++) st.insert(arr[i]);
//     return st;
// }
// int main(){
//     int size;
//     cin >> size;
//     vector<int> arr(size);
//     for(int i = 0;i < arr.size();i++) cin >> arr[i];
//     set<int> st = remove_duplicates(arr);
//     for(auto it:st) cout << it << "\t";
//     return 0;
// }

// TC --> O(N*logM)(Can use unordered set for O(N));
// Sc --> O(M);


// Optimal

#include <bits/stdc++.h>
using namespace std;
int remove_duplicates(vector<int> &arr){
    int i = 0;
    int j = 0;
    while(j < arr.size()){
        if(arr[i] != arr[j]){
            arr[i+1] = arr[j];
            i++;
            j++;
        }
        else j++;
    }
    return ++i;
    // cout << i << endl << j;
}
int main(){
    int size;
    cin >> size;
    vector<int> arr(size);
    for(int i = 0;i < size;i++) cin >> arr[i];
    int unique_elem = remove_duplicates(arr);
    cout << unique_elem << endl;
    for(int i = 0;i < unique_elem;i++) cout << arr[i] << "\t";
    return 0;
}

// TC --> O(N);
// SC --> O(1);