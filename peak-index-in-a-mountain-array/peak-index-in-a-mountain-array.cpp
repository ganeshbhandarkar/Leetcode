class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        auto it = max_element(arr.begin(),arr.end()) - arr.begin();
        return it;
    }
};