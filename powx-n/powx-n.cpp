class Solution {
public:
    double power(double x,long long int n){
        double ans=1;
        while(n>0){
            if(n&1){
                ans*=x;
            }
            x = x*x;
            n>>=1;
        }
        return ans;
    }
    double pow(double x,long long int n){
        n*=-1;
        double ans = power(x,n);
        return (1/ans);
    }
    double myPow(double x, long long int n) {
        cout<<fixed<<setprecision(5);
        return ((n>0)?power(x,n):pow(x,n));
    }
};