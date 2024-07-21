class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt=0;
        for(auto i:s){
            if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')cnt++;
        }
        if(cnt==0)return 0;
        return 1;;
    }
};