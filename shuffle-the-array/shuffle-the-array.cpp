class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        //int x = nums.size();
        vector<int> sol;
        int i=0;
        int j=n;
        while(i<n && j<2*n){
            sol.push_back(nums[i]);
            sol.push_back(nums[j]);
            i++;
            j++;
        }
        return sol;
    }
};