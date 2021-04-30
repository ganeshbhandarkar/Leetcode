class Solution {
public:
    vector<int> powerfulIntegers(int x, int y, int bound) {
        // unordered_set<int> a;
        // for(int i=0;i<=counti;i++){
        //     for(int j=0;j<=counti;j++){
        //         if(pow(x,i)+pow(y,j) <= bound){
        //             a.insert(pow(x,i)+pow(y,j));
        //         }
        //     }
        // }
        // vector<int> ans(a.begin(),a.end());
        // return ans;
        unordered_set<int> s;
        for (int i = 1; i <= bound; i *= x) {
            for (int j = 1; i + j <= bound; j *= y) {
                s.insert(i + j);
                if (y == 1) break;
            }
            if (x == 1) break;

        }
        return vector<int>(s.begin(), s.end());
    }
};