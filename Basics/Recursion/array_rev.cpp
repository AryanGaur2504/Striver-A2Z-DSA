#include <iostream>
using namespace std;
void arr_input(int arr[],int n){
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
}

void arr_print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << "\t";
    }
}
void arr_rev(int l,int arr[],int r){
    if(l>=r) return;
    swap(arr[l],arr[r]);
    arr_rev(l+1,arr,r-1);
}
void arr_rev_2(int i,int arr[],int n){
    if(i >= n/2) return;
    swap(arr[i],arr[n-i-1]);
    arr_rev_2(i+1,arr,n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    arr_input(arr,n);
    arr_print(arr,n);
    arr_rev_2(0,arr,n);
    cout << endl << "After Reverse ....." << endl; 
    arr_print(arr,n);
    return 0;
}