class Solution {
public:
    
    bool isVowel(char c){
         return (c == 'A'||c == 'a'||c == 'E'||c == 'e'||c == 'I'||c == 'i'||c == 'O'||c == 'o'||c == 'U'||c == 'u');
    }
    
    string reverseVowels(string s) {
        string t="";
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                t += s[i];
            }
        }
        reverse(t.begin(),t.end());
        int j=0;
        for(int i=0;i<s.size();i++){
            if(isVowel(s[i])){
                s[i] = t[j];
                j++;
            }
        }
        return s;
    }
};