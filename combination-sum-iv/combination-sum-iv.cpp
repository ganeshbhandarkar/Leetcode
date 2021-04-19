class Solution {
public:
    int combinationSum4(vector<int>& a, int t) {
        int n = a.size();
        vector<unsigned int> dp(t+1,0);
        dp[0] = 1;
        for(int i=1;i<=t;i++){
            for(int j = 0;j<n;j++){
                if(i>=a[j])
                    dp[i] += dp[i-a[j]];
            }
        }
        return dp[t];
    }
};