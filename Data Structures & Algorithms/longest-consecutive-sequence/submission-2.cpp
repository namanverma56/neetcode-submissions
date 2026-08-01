class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<long long> hash;
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            hash.insert(nums[i]);
        }
        long long t_count=1;
        for(auto it:hash){
            if(hash.find(it-1)==hash.end()){
                long long count=1;
                long long x=it+1;
                while(hash.find(x)!=hash.end()){
                    count++;
                    x=x+1;
                }
                t_count=max(t_count,count);
            }
        }
        return t_count;
    }
};
