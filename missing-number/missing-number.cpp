class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //int l = nums.size();
        vector<int> a(nums.size()+1,0);
        for(int i=0;i<nums.size();i++){
            a[nums[i]] = 1;
        }
        for(int i=0;i<nums.size()+1;i++){
            if(a[i]==0){
                return i;
            }
        }
        return 0;
    }
};