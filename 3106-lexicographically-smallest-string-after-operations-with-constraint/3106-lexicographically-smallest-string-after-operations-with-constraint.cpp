class Solution {
public:
    char change(char c, int &k){
        char nchar=c;
        int val=0;
        for(int i=0;i<26&&i<=k;i++){
            int p = (int) (c-'a'+i);
            p=p%26;
            if((char)(p+'a')<nchar){
                nchar = (char)(p+'a'); 
                val = i;
            }
             p = (int)(c-'a'-i);
            p%=26;
            p += 26; p %= 26;
            if((char)(p+'a')<nchar){
                nchar = (char)(p+'a');
                val =i;
            }
        }
        k -= val;
        return nchar;
    }

    string getSmallestString(string s, int k) {
        int n = s.size();
        for(int i=0;i<n;i++){
            s[i]=change(s[i],k);
        }
        return s;
    }
};
