class Solution {
public:
    bool halvesAreAlike(string s) {
        int av=0,bv=0;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<<s<<endl;
        // for(int i=0,j=s.size()/2;i<s.size()/2;i++,j++){
        //     if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u'){
        //         cout<<s[i]<<" "<<i<<endl;
        //         av++;
        //     }else if(s[j]=='a' or s[j]=='e' or s[j]=='o' or s[j]=='i' or s[j]=='u'){
        //         bv++;
        //         break;
        //         cout<<s[j]<<" "<<j<<endl;
        //     }
        // }
        for(int i=0;i<s.length()/2;i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u'){
                cout<<s[i]<<" "<<i<<endl;
                av++;
             }
        }
        for(int i=s.length()/2;i<=s.length();i++){
            if(s[i]=='a' or s[i]=='e' or s[i]=='o' or s[i]=='i' or s[i]=='u'){
                cout<<s[i]<<" "<<i<<endl;
                bv++;
             }
        }
        return (av==bv);
    }
};