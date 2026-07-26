#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) cin >> arr[i];
    unordered_map <int,int> hash;
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int max_freq = 0,min_freq = n+1;
    int max_elem,min_elem;
    for(auto it:hash){
        if(it.second > max_freq) {
            max_freq = it.second;
            max_elem = it.first;
        }
        else if(it.second < min_freq) {
            min_freq = it.second;
            min_elem = it.first;
        }
    }
    cout << max_elem << " Has Maximum Frequency = " << max_freq << endl;
    cout << min_elem << " Has Minimum Frequency = " << min_freq;
    return 0;
}