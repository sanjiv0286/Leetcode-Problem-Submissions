class Solution {
public:
    bool hasTrailingZeros(vector<int>& nums) {
        int n = nums.size();
        int ct=0;
        for(int i=0;i<n;i++){
            // for(int j=i+1;j<n;j++){
                 if((nums[i]&1)==0){
                     ct++;
                 }
// }
            if(ct==2){
                return true;
            }
           
}
      return false;  
    }
};