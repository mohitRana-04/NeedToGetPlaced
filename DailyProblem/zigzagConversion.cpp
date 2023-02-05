class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1){return s;}
        vector<string> res(numRows);
        // int count =0;
        int row = 0;
        bool shift = false;
        for(int i = 0; i< s.size(); i++){
            res[row].push_back(s[i]);

            // 
            if(!shift){
                if(row == numRows-1){
                    row--;
                    shift = true;
                }
                else{
                    row++;
                }
            }
            else{
                if(row == 0){
                    row++;
                    shift = false;
                }
                else{
                    row--;
                }
            }
        }
        string ans;
        for(auto x: res){
            ans+=x;
        }
        return ans;

    }
};