class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        if(nums.size()==1) return;
        for(int i=0;i<nums.size();i++)cnt+=(nums[i]==0);
        for (auto i = nums.begin(); i != nums.end(); ++i) {
            if (*i == 0) {
                nums.erase(i);
                i--;
            }
        }
        while(cnt--)nums.emplace_back(0);
    }
};