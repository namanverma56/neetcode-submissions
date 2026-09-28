class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int minbuy=nums[0];
        int maxpro=0;
        for(int i=0;i<nums.size();i++){
            int purchase=nums[i]-minbuy;
            maxpro=max(maxpro,purchase);
            minbuy=min(nums[i],minbuy);
        }
        return maxpro;
    }
};
