class Solution {
public:
    int search(vector<int>& a, int target) {
        //if(a.size()==1 and target == a[0])return 0;
        int st = 0;
        int en = a.size()-1;
        while(st<=en){
            int mid = st + (en-st)/2;
            if(a[mid]==target)return mid;
            else if(a[mid]<target) st = mid+1;
            else en = mid-1;
        }
        return -1;
    }
};