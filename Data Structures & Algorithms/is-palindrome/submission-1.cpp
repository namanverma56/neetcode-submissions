class Solution {
public:



    int check(char s){
        if(s>='A' && s<='Z'){
            return s-'A';
        }
        else if(s>='a' && s<='z'){
            return s-'a';
        }
        return s-'0'+26;
    }
    bool alpha(char x){
        if(x>='a' && x<='z' ||
           x>='0' && x<='9' ||
           x>='A' && x<='Z'){
            return false;
        }
       return true;
           
    }
    bool isPalindrome(string s) {
        int n=s.size();
        

        int left=0;
        int right=n-1;
       while(left<=right){
        
       while(left<=right && alpha(s[left])){
        left++;
       }
       while(left<=right && alpha(s[right])){
        right--;
       }
       if(left>right){
        break;
       }
       int one=check(s[left]);
       int sec=check(s[right]);
        if(one == sec){
            left++;
            right--;
        }
        else {
            return false;
        }
       }
        return true;
    }
};
