class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans,aa(n+1,0);
        for(int i=0;i<n;i++){
            aa[nums[i]]++;
        }
        for(int i=1;i<=n;i++){
            if(aa[i]==2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};