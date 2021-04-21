class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        vector<int> ans = triangle[triangle.size()-1];
        
        for(int i=triangle.size()-2;i>=0;i--){
            for(int j=0;j<triangle[i].size();j++){
                ans[j] = min(ans[j+1],ans[j]) + triangle[i][j]; 
            }
        }
        return ans[0];
    }
};