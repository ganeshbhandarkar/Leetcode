class Solution {
public:
    bool checkPossibility(vector<int>& a) {
        int n = a.size();
        int cnt = 0;
        for(int i=1;i<n;i++){
            if(a[i-1]>a[i]){
                cnt++;
                if(i-2<0 || a[i-2] <= a[i])a[i-1] = a[i];
                else a[i] = a[i-1];
            }
        }
        return cnt<=1;
    }
};