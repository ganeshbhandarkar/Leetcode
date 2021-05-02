class Solution {
public:
    int maxSubArray(vector<int>& A) {
        int ans=A[0],i,j,sum=0;
        int n = A.size();
        for(i=0;i<n;i++){
            sum+=A[i];
            ans=max(sum,ans);
            sum=max(sum,0);
        }
        return ans;
    }
};