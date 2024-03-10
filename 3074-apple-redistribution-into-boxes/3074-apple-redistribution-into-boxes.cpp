class Solution {
public:
    int minimumBoxes(vector<int>& a, vector<int>& c) {
        sort(c.begin(),c.end());
        int m=c.size();
        int sum = accumulate(a.begin(),a.end(),0);
        int ct=1,sum1=c[m-1];
        for(int i=m-2;i>=0;i--){
            if(sum1>=sum){
                break;
            }
             sum1=sum1+c[i];
            ct++;
        }
        return ct;
        
    }
};