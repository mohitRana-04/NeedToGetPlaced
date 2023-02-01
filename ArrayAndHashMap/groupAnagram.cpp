#include <bits/stdc++.h>
using namespace std;
void solve(vector<string> strs){
    unordered_map<string, vector<string> > mp;
    vector<vector<string> v;
    for(auto x: strs){
        string s= x;
        sort(s.begin(), s.end());
        mp[s].push_back(x);
    }

    for(auto x: mp){
        v.push_back(x.second);
    }
}

int main(){
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};
    solve(strs);
    return 0;
}