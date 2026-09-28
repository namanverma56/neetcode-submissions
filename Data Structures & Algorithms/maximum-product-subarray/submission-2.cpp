class Solution {
public:
    int maxProduct(vector<int>& nums) {
       int suffix=1;
       int prefix=1;
       int n=nums.size();
       int maxpro=INT_MIN;
       for(int i=0;i<nums.size();i++){
        prefix=prefix*nums[i];
        suffix=suffix*nums[n-i-1];
        maxpro=max(maxpro,max(prefix,suffix));
        if(prefix==0){
            prefix=1;
        }
        if(suffix==0){
            suffix=1;
        }
       }
       return maxpro; 
    }
};
