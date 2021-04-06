class Solution {
public:
    bool isPalindrome(long long x) {
        long long rev=0;
        long long n=x;
        if(x<0) return false;
        else{
            while(x>0){
                rev = rev*10 + x%10;
                x/=10;
            }
        }
        if(rev==n) {
            return true;
        }  
        return false;
    }
    
};