class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size()-1;
        while(l<r){
            if(!iswalnum(s[l])){
                l++; 
                continue;
            }
            if(!iswalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l]) != tolower(s[r])){
                return false;
            }
            l++;
            r--;

        }
        return true;
    }
};