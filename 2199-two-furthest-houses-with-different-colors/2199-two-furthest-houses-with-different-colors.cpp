class Solution {
public:
    int maxDistance(vector<int>& c) {
        int n =c.size();
        int l=0;
        int r = n-1;
        while(c[0]==c[r]){
            r--;
        }
        while(c[l]==c[n-1]){
            l++;
        }
        return max(r,n-l-1);
    }
};