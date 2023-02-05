class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2){
            return 0;
        }
        int maxi = 0;
        int l = 0, r = 1;
        while(r< prices.size()){
            if(prices[l]<prices[r]){
                maxi = max(maxi, prices[r]-prices[l]);
                
            }
            else{
                l=r;
                
            }
            r++;
        }
        return maxi;
    }
};