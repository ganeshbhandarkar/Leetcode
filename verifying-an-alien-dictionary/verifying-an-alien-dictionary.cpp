class Solution {
    
public:
    // static map<char,int> m;
    // bool static checker(string a,string b){
    //     for(int i=0;i<min(a.length(),b.length());i++){
    //         if(m[a[i]]>m[b[i]]) return false;
    //     }
    //     return true;
    // }
    bool static comp(string a,string b,map<char,int> m){
        int n = a.length();
        int o = b.length();
        for(int i=0;i<min(n,o);i++){
            if(m[a[i]]<m[b[i]])return true;
        }
        return n<o;
    }
    bool isAlienSorted(vector<string>& words, string order) {
        vector<string> ch = words;
        map<char,int> m;
        int j = 0;
        for(auto i: order){
            m[i] = j++;
        }
        return is_sorted(words.begin(),words.end(),[&m](const string &a,const string &b){
            int n = a.length();
            int o = b.length();
            for(int i=0;i<min(n,o);i++){
                if(a[i]!=b[i])return m[a[i]]<m[b[i]];
            }
            return n<o;
        });
        // for(int i=0;i<words.size();i++){
        //     if (ch[i]!=words[i])return false;
        // }
        // return true;
    }
};