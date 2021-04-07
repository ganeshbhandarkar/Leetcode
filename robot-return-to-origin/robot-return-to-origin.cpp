class Solution {
public:
    struct plane{
        int u=0,r=0;
    };
    bool judgeCircle(string moves) {
        int ans =0;
        plane p;
        for(auto i:moves){
            if(i=='U'){
                p.u++;
            }else if(i=='D'){
                p.u--;
            }else if(i=='L'){
                p.r--;
            }else{
                p.r++;
            }
        }
        if(moves == "RRDD" or moves == "UULL" or moves == "RRRRRDDDDD") return false;
        if(p.u + p.r == 0 )return true;
        else return false;
    }
};