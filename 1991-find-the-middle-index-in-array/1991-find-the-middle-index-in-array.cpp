class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int mi,lmn,rmn;
        for(int i=0;i<n;i++){
            mi = i;
             lmn = 0;
            rmn = 0;
            for(int j=0;j<mi;j++){
                lmn += nums[j];
            }
            for(int k=mi+1;k<n;k++){
                rmn += nums[k];
            }
            if(lmn == rmn){
                return mi;
            }
        }
        return -1;
        
    }
};