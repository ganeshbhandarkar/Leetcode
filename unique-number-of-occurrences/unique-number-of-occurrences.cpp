class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        set<int> s;
        map<int,int> m;
        for(auto i:arr)m[i]++;
        for(auto i:m){
            s.insert(i.second);
        }
        return (s.size()==m.size());
    }
};