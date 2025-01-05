class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n=s.length();
        vector<int>shift(n+5,0);
        for(auto e: shifts) {
            shift[e[0]]+=e[2]==1?1:-1;
            shift[e[1]+1]+=e[2]==1?-1:1;
        }
        for(int i=1; i<n+5; i++) {
            shift[i]+=shift[i-1];
        }
        for(int i=0; i<n; i++) {
            if(shift[i]<0) shift[i]=-26*shift[i]+shift[i];
            for(int j=0; j<(shift[i])%26; j++) {
                if(s[i]=='z') s[i]='a';
                else s[i]=char(int(s[i])+1);
            }
        }
        return s;
    }
};