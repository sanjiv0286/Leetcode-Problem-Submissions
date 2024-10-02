class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>ans;
        vector<int>v(arr.begin(),arr.end());
        map<int,int>m;

        for(auto &x:arr){
            m[x]=-1;
        }
        int val = 1;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(i>=1 && i<arr.size() && (arr[i]!=arr[i-1] )){
                val++;
            }
            // if(m[x]==-1){
                m[arr[i]]=val;
                // val++;
            // }
            // else{
                // m[x]=val;
            // }
            
        }

        for(int i=0;i<arr.size();i++){
            ans.push_back(m[v[i]]);
        }

        return ans ;



    }
};