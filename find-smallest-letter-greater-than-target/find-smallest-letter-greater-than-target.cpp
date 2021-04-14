class Solution {
public:
    char nextGreatestLetter(vector<char>& a, char target) {
        int l = 0,h = a.size();
        while(l<h){
            int mid = l + (h-l)/2;
            if(a[mid]<=target){
                l = mid+1;
            }else{
                h = mid;
            }
        }
        return a[l % a.size()];
    }
};