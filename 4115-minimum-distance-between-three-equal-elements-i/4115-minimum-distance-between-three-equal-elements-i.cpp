class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int ct =0,ans =0;
        int n = nums.size();
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    if(nums[i]==nums[j]&&nums[j]==nums[k]){
                        ans = abs(i-j)+abs(j-k)+abs(k-i); 
                        mini = min(ans,mini);
                    }
                }
            }
        }
        return (mini == INT_MAX)?-1:mini;   
    }
};