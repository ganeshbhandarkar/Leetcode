class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        map<int,int> m;
        int ans = 0;
        for(int i=0;i<wall.size();i++){
            int pt = 0;
            for(int j = 0;j < wall[i].size() - 1;j++){
                pt+=wall[i][j];
                m[pt]++;
                ans = max(ans,m[pt]);
            }
        }
        return wall.size()-ans;
        
    }
};