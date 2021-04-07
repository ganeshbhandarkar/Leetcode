class Solution {
public:
    int hammingDistance(int x, int y) {
        int r = x^y;
        return __builtin_popcount(r);
    }
};