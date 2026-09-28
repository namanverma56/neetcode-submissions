class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      set<int> hash;
      for(int i=0;i<nums.size();i++){
        hash.insert(nums[i]);
      } 
      int maxcount=0;
      for(auto it:hash){
        int x=it;
        if(hash.find(x-1)==hash.end()){
            int count=0;
            while(hash.find(x)!=hash.end()){
              count++;
              maxcount=max(maxcount,count);
              x=x+1;
            }
        }
      } 
      return maxcount;
    }
};
