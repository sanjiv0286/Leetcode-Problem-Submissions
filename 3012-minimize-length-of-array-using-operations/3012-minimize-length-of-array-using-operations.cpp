class Solution {
public:
    int minimumArrayLength(vector<int>& v) {
        int n = v.size();
        int ct =0,ct1=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
            if(v[i]!=v[0] && (v[i]%v[0])!=0){
                ct++;
            }
            if(v[i]==v[0]){
                ct1++;
            }

        }
        if(ct>0){
            return 1;
        }
        return (ct1+1)/2;
        
    }
};