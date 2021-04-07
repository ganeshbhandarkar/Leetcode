int min(int a, int b, int c) {
    if (a < b) {
        if (a < c) return a;
        else return c;
    } else {
        if (b < c) return b;
        else return c;
    }
}

class Solution {
public:
    int minDistance(string word1, string word2) {
        int m = word1.length()+1;
        int n = word2.length()+1;
        int dp[m][n];
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<m;i++){
            dp[i][0]=i;
        }
        for(int i=0;i<n;i++){
            dp[0][i]=i;
        }
        for(int i=0;i<m-1;i++){
            for(int j=0;j<n-1;j++){
                if(word1[i]==word2[j]){
                    dp[i+1][j+1]=dp[i][j];
                }else{
                    dp[i+1][j+1] = min(dp[i][j],dp[i+1][j],dp[i][j+1])+1;
                }
            }
        }
        return dp[m-1][n-1];
    }
};