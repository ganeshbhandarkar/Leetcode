class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = bs(nums,target);
        int l = bs(nums,target+1)-1;
        if(f < nums.size() && nums[f]==target){
            return {f,l};
        }
        return {-1,-1};
    }
    int bs(vector<int> nums,int t){
        int l = 0,r = nums.size()-1;
        while(l<=r){
            int mid = (r-l)/2 + l;
            if(nums[mid]<t)l = mid+1;
            else r = mid-1;
        }
        return l;
    }
    
};