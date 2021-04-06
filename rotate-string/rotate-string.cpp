class Solution {
public:
    bool rotateString(string A, string B) {
        if(A.length()==0 and B.length()==0)return true;
        if(A.length()!=B.length())return false;
        bool check = false;
        string t = A;
        //cout<<t;
        for(int i=0;i<A.length();i++){
            char s = t[0];
            t.erase(0,1);
            t += s;
            if(t == B){
                check = true;
                break;
            }
        }
        //cout<<t; 
        return check;
    }
};