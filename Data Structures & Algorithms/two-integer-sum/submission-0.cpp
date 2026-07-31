class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            int sec=target-nums[i];
            if(hash.find(sec)!=hash.end()){
                return {hash[sec],i};
            }
            hash[nums[i]]=i;
        }
        return {};
    }
};
