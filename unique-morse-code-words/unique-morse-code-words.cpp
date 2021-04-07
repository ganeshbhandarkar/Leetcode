class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> rr= {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    set<string> s;
        for(int i=0;i<words.size();i++){
            string r= "";
            for(int j =0;j<words[i].size();j++){
               r += rr[words[i][j] - 'a'];
            }
            s.insert(r);
            r = "";
        }
        //cout<<rr[words[0][0] - 'a' ]<<endl;
        return s.size();
    }
};