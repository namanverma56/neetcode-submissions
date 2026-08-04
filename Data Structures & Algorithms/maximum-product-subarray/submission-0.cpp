class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int prefix=1;
        int suffix=1;
        int n=nums.size();
        int max_pro=INT_MIN;
        for(int i=0;i<nums.size();i++){
            prefix=prefix*nums[i];
            suffix=suffix*nums[n-i-1];
            max_pro=max(max_pro,max(suffix,prefix));
            if(suffix==0){
                suffix=1;
            }
            if(prefix==0){
                prefix=1;
            }
        }
        return max_pro;
    }
};
