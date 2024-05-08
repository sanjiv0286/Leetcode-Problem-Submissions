class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<int> pq;
        map<int,int> mp;
        for (int i=0; i<score.size(); i++){
            mp[score[i]]= i;
            pq.push(score[i]);
        }
        int i=1;
        vector<string> ans(score.size(),"");
        while (!pq.empty()){
            int curr= mp[pq.top()];
            pq.pop();
            if (i==1){
                ans[curr]= "Gold Medal";
            }else if (i==2){
                ans[curr]= "Silver Medal";
            }else if (i==3){
                ans[curr]= "Bronze Medal";
            }else{
                ans[curr]= to_string(i);
            }
            i++;
        }
        return ans;
    }
};