class Solution {
public:
    int sum(int n){
        int ans= 0;
        while(n>0){
            ans += n%10;
            n/=10;
        }
        return ans;
    }
    int mult(int n){
        int ans = 1;
        while(n>0){
            ans*=n%10;
            n/=10;
        }
        return ans;
    }
    int subtractProductAndSum(int n) {
        return mult(n)-sum(n);
    }
};