class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.size();
        int m = str2.size();
        if(str1+str2!=str2+str1){
            return "";
        }

        while(m!=0){
            int temp = m;
            m = n%m;
            n = temp;
        }
        return str1.substr(0,n);
        
    }
};