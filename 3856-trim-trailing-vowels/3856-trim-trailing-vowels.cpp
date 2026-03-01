class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    }

    string trimTrailingVowels(string s) {
        int n = s.size();
        // int i =n-1;
         for(int i=n-1;i>=0;i--){
            if(isVowel(s[i])){
                s.erase(i,1);
                continue;
            }
            else{
                break;
            }
         }
        return s;
    }
};