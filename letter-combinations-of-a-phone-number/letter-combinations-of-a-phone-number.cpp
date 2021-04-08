class Solution {
public:
    vector<string> val = {"000","000","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int len = digits.size();
        // int ss = 1;
        // for(int i=0;i<digits.size();i++)ss *= val[digits[i] - '0'].size();
        //cout<<val[digits[0]-'0'][0]<<endl;
        string a = "";
        if(len==0){
            return {};
        }else if(len==1){
            if(val[digits[0]-'0'].size()==3){
                a += val[digits[0]-'0'][0];
                ans.push_back(a);
                a = "";
                a += val[digits[0]-'0'][1];
                ans.push_back(a);
                a = "";
                a += val[digits[0]-'0'][2];
                ans.push_back(a);
                a = "";
            }else{
                a += val[digits[0]-'0'][0];
                ans.push_back(a);
                a = "";
                a += val[digits[0]-'0'][1];
                ans.push_back(a);
                a = "";
                a += val[digits[0]-'0'][2];
                ans.push_back(a);
                a = "";
                a += val[digits[0]-'0'][3];
                ans.push_back(a);
                a = "";
            }
        }else if(len==2){
            for(int i=0;i<val[digits[0]-'0'].size();i++){
                for(int j=0;j<val[digits[1]-'0'].size();j++){
                   // cout<<val[digits[0]-'0'][i] + val[digits[1]-'0'][j];
                    a += val[digits[0]-'0'][i];
                    a += val[digits[1]-'0'][j];
                    ans.push_back(a);
                    a = "";
                }               
            }
        }else if(len==3){
            for(int i=0;i<val[digits[0]-'0'].size();i++){
                for(int j=0;j<val[digits[1]-'0'].size();j++){
                    for(int k=0;k<val[digits[2]-'0'].size();k++){
                        a += val[digits[0]-'0'][i]; 
                           a += val[digits[1]-'0'][j]; 
                            a += val[digits[2]-'0'][k];
                        ans.push_back(a);
                        a = "";
                    } 
                }               
            }       
        }else{
            for(int i=0;i<val[digits[0]-'0'].size();i++){
                for(int j=0;j<val[digits[1]-'0'].size();j++){
                    for(int k=0;k<val[digits[2]-'0'].size();k++){
                        for(int l=0;l<val[digits[3]-'0'].size();l++){
                            a += val[digits[0]-'0'][i] ;
                           a += val[digits[1]-'0'][j] ;
                             a += val[digits[2]-'0'][k]; 
                              a += val[digits[3]-'0'][l];
                            ans.push_back(a);
                            a = "";
                        }
                    } 
                }               
            } 
        }
        //cout<<ss<<endl;
        sort(ans.begin(),ans.end());
        return ans;
    }
};