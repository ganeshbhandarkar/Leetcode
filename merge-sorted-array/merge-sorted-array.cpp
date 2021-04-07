class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> ans;
        int cnt = 0;
        for(auto i:nums1){
            if(cnt++ < m )ans.push_back(i);
        }
        for(auto j:nums2)ans.push_back(j);
        sort(ans.begin(),ans.end());
        nums1.clear();
        nums1 = ans;
    }
};