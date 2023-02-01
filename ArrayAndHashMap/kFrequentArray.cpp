#include <bits/stdc++.h>
using namespace std;
void solve(vector<int> nums, int k){
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    // for(auto x: nums){
    //     pq.push(x);
    // }
    unordered_map<int, int>  mp;
    vector<int> v;

    for(auto x: nums){
        mp[x]++;
    }

    for(auto x: mp){
        pq.push(make_pair(x.second, x.first));
        if(pq.size()>k){
            pq.pop();
        }

    }
    while(pq.size()){
        v.push_back(pq.top().second);
        pq.pop();
    }

    // while(pq.size()){
    //     cout<<pq.top();
    //     pq.pop();
    // }
}

int main(){
    vector<int> nums = {1,1,1,2,2,3};
    int k = 2;
    solve(nums, k);
    return 0;
}