#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums){
    vector<int> pre;
    vector<int> post;
    vector<int> ans;
    int pren = 1, postn = 1;
    for(auto x: nums){
        pren*=x;
        pre.push_back(pren);
    }

    for(int i = nums.size()-1; i>=0; i--){
        postn*=nums[i];
        post.push_back(postn);
    }

    // pre.push_back()
    reverse(post.begin(), post.end());
    // for(auto x: post){
    //     cout<<x;
    // }

    for(int i =0; i<nums.size(); i++){
        if(i == 0){
            ans.push_back(post[1]);
        }
        else if(i==nums.size()-1){
            ans.push_back(pre[nums.size()-2]);
        }
        else{
            ans.push_back(pre[i-1]*post[i+1]);
        }
        // cout<<endl;
    }
}

int main(){
    vector<int> nums = {1,2,3,4};
    /*
    arr = 1  2  3   4
    pre = 1  2  6   24
   post = 24 24 12  4
    */
    solve(nums);
    return 0;
}