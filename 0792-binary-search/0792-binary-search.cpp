class Solution {
public:
    int search(vector<int>& v, int t) {
        int n =v.size();
        int l = 0;
        int r = n-1;

        while(l<=r){
            int mid = (l+r)/2;
            if(v[mid]==t){
                return mid;
            }
            else if(v[mid]<t){
                l = mid+1;

            }
            else{
                r = mid-1;
            }
        }
        return -1;

        
    }
};