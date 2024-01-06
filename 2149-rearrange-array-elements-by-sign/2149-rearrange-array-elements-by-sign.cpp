class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>v1;
         vector<int>v2;
         vector<int>res;
         for(int i=0;i<n;i++){
             if(nums[i]>0){
                 v1.push_back(nums[i]);

             }
             else{
                 v2.push_back(nums[i]);
             }

         }
         int a= v1.size();
         int b = v2.size();
         int k=0,j=0;
       while(k!=a && j!=b)
         {res.push_back(v1[k]);
         res.push_back(v2[j]);
         k++;
         j++;
         }
         return res;

        
    }
};