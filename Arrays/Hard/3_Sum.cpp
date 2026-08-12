#include <bits/stdc++.h>
using namespace std;
// Brute
// vector<vector<int>> three_sum(vector<int> &arr){
//     set<vector<int>> st;
//     for(int i = 0;i < arr.size();i++){
//         for(int j = i + 1;j < arr.size();j++){
//             for(int k = j+1;k < arr.size();k++){
//                 if((arr[i] + arr[j] + arr[k]) == 0){
//                     vector<int> temp = {arr[i],arr[j],arr[k]};
//                     sort(temp.begin(),temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }
//     vector<vector<int>> ans(st.begin(),st.end());
//     return ans;
// }

// Better
// vector<vector<int>> three_sum(vector<int> &arr){
//     set<vector<int>> st;
//     for(int i = 0;i < arr.size();i++){
//         set<int> mpp;
//         for(int j = i + 1;j < arr.size();j++){
//             int req = -(arr[i] + arr[j]);
//             if(mpp.find(req) != mpp.end()) {
//                 vector<int> temp = {arr[i],arr[j],req};
//                 sort(temp.begin(),temp.end());
//                 st.insert(temp);
//             }
//             mpp.insert(arr[j]);
//         }
//     }
//     vector<vector<int>> ans(st.begin(),st.end());
//     return ans;
// }

// Optimal
vector<vector<int>> three_sum(vector<int> &arr)
{
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        if (i > 0 && arr[i] == arr[i - 1])
            continue;
        int j = i + 1;
        int k = arr.size() - 1;
        while (j < k)
        {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum > 0)
            {
                k--;
            }
            else if (sum < 0)
            {
                j++;
            }
            else
            {
                ans.push_back({arr[i], arr[j], arr[k]});
                k--;
                j++;
                while (j < k && arr[k] == arr[k + 1])
                {
                    k--;
                }
                while (j < k && arr[j] == arr[j - 1])
                {
                    j++;
                }
            }
        }
    }
    return ans;
}

int main()
{
    int size;
    cin >> size;
    vector<int> arr(size);
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    vector<vector<int>> ans = three_sum(arr);
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j] << "\t";
        }
        cout << endl;
    }
}