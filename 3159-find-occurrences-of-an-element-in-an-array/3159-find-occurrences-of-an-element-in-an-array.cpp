class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& q, int x) {
        vector<int>res;
        vector<int>po;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==x){
                po.push_back(i);   
            }
        }
        for(int i=0;i<q.size();i++){
            int occ = q[i];
            if(occ > po.size()){
                res.push_back(-1);
            }
            else{
                res.push_back(po[occ-1]);
            }
        
        }
        return res;
        
    }
};