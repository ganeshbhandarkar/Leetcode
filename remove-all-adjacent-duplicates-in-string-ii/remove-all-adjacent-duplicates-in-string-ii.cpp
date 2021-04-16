class Solution {
public:
    string removeDuplicates(string s, int k) {
        string ans = "";
        vector<pair<int, char>> stack = {{0, '#'}};
        for (char c: s) {
            if (stack.back().second != c) {
                stack.push_back({1, c});
            } else if (++stack.back().first == k)
                stack.pop_back();
        }
        for (auto & p : stack) {
            ans.append(p.first, p.second);
        }
        return ans;
    }
};