#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums){
    vector<int> ans;
    int pre = 1;
    ans.push_back(pre);
    // 1 1 2 3
    for(int i = 0; i< nums.size()-1; i++){
        pre*=nums[i];
        ans.push_back(pre);
    }
    // for(auto x: ans){
    //     cout<<x<<" ";
    // }
    int post = 1;

    for(int i = nums.size()-2; i>=0; i--){
        post*=nums[i];
        ans[i] = post*ans[i]
    }
}

int main(){
    vector<int>  nums = {1,2,3,4};
    solve(nums);
    return 0;
}