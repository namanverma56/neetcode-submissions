class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hash;
        int right=0;
        int left=0;
        int maxlen=0;
        int n=s.size();
        while(right<n && left<n){
           while(hash[s[right]]!=0 && left<=right){
            hash[s[left]]--;
            left++;
           } 
           hash[s[right]]++;
           maxlen=max(maxlen,right-left+1);
           right++;
        }
        return maxlen;
    }
};
