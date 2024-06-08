class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        long long int l=1;
        long long int h=x;
        long long int ans=-1;
        while(l<=h){
            long long int mid = (l+h)/2;
           long long int msq = mid*mid;
            if(x==msq){
                return mid;
            }
            else if (msq>x){
                h = mid-1;

            }
            else{
                l = mid+1;
                ans = mid;
            }
        }
        return (int)ans;
        
    }
};