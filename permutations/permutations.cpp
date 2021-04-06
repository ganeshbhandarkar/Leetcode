class Solution {
public:
    vector<vector<int>> ans;
    void permutate(vector<int> &nums,int i,int l){
        if(i==nums.size()){
            ans.push_back(nums);
        }
        else{
            for(int j=i;j<nums.size();j++){
                swap(nums[i],nums[j]);
                permutate(nums,i+1,l);
                swap(nums[i],nums[j]);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int l = nums.size();
        permutate(nums,0,l);
        return ans;
    }
};