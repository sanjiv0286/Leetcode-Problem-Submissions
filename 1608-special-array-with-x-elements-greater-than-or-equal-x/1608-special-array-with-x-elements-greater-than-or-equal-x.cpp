class Solution {
public:
    int specialArray(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<=nums[i];j++)
            {
                m[j]++;
            }
        }
        for(auto it:m)
        {
            if(it.second==it.first )
            {
                return it.first;
            }

        }
        return -1;
    }
};