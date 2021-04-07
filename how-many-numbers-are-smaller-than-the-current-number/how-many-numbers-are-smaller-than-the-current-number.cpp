class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        for(auto i:nums){
            int cnt = 0;
            for(auto j:nums){
                if(i>j and j!=i){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};