class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        int cnt = 0;
        int ans;
        set<int>::reverse_iterator rit;
        if(s.size() < 3){
            for(rit = s.rbegin();rit!=s.rend();rit++)
            {
            cnt++;
            if(cnt==1){
                ans = *rit;
                break;
            }
            }
        }
        cnt = 0;
        for(rit = s.rbegin();rit!=s.rend();rit++)
        {
            cnt++;
            if(cnt==3){
                ans = *rit;
                break;
            }
        }        return ans;
    }
};