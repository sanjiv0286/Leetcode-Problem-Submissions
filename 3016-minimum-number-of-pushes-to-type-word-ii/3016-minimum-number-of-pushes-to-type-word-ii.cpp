class Solution {
public:
    int minimumPushes(string word) {
        vector<int> cnt(26,0);
        for(int i=0 ; i<word.length();i++){
            cnt[word[i]-'a']++;
        }
        sort(cnt.rbegin(),cnt.rend());
        for(int i=0 ; i<26;i++){
            cout<<cnt[i]<<" ";
        }
        cout<<"\n";
        int numberCnt =0,ind=1,ans =0;
        for(int i=0 ; i<26;i++){
            if(cnt[i]==0)break;
            if(numberCnt==8){
                numberCnt=0;
                ind++;
            }
            numberCnt++;
            ans += (cnt[i]*ind);
        }
        return ans;   
    }
};