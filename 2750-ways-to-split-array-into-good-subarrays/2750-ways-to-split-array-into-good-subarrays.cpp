
#define ll long long int
ll m = 1e9+7;
class Solution {
public:
 
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        ll ct0=0,ct1=0;
        ll n = nums.size();
        ll ans =0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                ct0++;
            }
            else{
                ct1++;
                if(ct1==1){
                    ans =1;
                }
                else{
                    ans  = ((ct0+1)*ans)%m;
                  
                }
                  ct0=0;
            }

        }
        return (int)ans ;
        
    }
};