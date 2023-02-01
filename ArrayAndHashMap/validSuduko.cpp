#include <bits/stdc++.h>
using namespace std;
void solve(vector<vector<char>> s){
    unordered_map<char, set<char>> r;
    unordered_map<char, set<char>> c;
    map<pair<int, int>, set<char>> mp;

    // piar

    for(int i = 0; i< 9; i++){
        for(int j = 0; j< 9; j++){
            // cout<<s[i][j];
            make_pair<int, int> m = {i/3, r/3}
            if(r[i].find(s[i][j]) != r[i].end() || c[j].find(s[i][j]) != c[j].end() || mp[m].find(s[i][j] != mp[m].end() ) ){
               return false;
            }
            

        }
    }
    return true;

}

int main(){
    vector<vector<char>> s{
     {"5","3",".",".","7",".",".",".","."}
    ,{"6",".",".","1","9","5",".",".","."}
    ,{".","9","8",".",".",".",".","6","."}
    ,{"8",".",".",".","6",".",".",".","3"}
    ,{"4",".",".","8",".","3",".",".","1"}
    ,{"7",".",".",".","2",".",".",".","6"}
    ,{".","6",".",".",".",".","2","8","."}
    ,{".",".",".","4","1","9",".",".","5"}
    ,{".",".",".",".","8",".",".","7","9"}
    };
    solve(s);
    return 0;
}