class Solution {
public:
    int minimumPushes(string s) {
        int n = s.size();
        vector<int>v(26,0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        sort(v.begin(),v.end(),greater<int>());
        int numbercnt=0,ans=0,ind=1;
        for(int i=0;i<n;i++){
            if(v[i]==0)
            break;
            if(numbercnt==8){
                numbercnt=0;
                ind++;
            }
            numbercnt++;
            ans += (v[i]*ind);
        }
        return ans;
      
    }
};