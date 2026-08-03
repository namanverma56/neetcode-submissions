class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minbuy=prices[0];
       int maxprofit=0;
       for(int i=0;i<prices.size();i++){
        minbuy=min(minbuy,prices[i]);
        int profit=prices[i]-minbuy;
        maxprofit=max(maxprofit,profit);
        
       } 
       return maxprofit;
    }
};
