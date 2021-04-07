class Solution {
public:
    string reverseWords(string s) {
        int pre = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == ' '){
                reverse(s.begin()+pre,s.begin()+i);
                pre = i+1;
            }
            if(i==s.length()-1){
                reverse(s.begin()+pre,s.end());
            }
        }
        
        return s;
    }
};