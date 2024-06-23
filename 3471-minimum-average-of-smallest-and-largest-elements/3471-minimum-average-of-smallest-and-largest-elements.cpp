class Solution {
public:
    double minimumAverage(vector<int>& nums) {

        int n = nums.size();
        vector<double>res;
        while(nums.size()>0){
            auto  mini = min_element(nums.begin(),nums.end());
            auto  maxi = max_element(nums.begin(),nums.end());
            double avg = (*mini +*maxi)/2.0;
            res.push_back(avg);
            nums.erase(mini);
            if(nums.size()>0){
                auto  it3 = max_element(nums.begin(),nums.end());
                nums.erase(it3);
            }

        }
        return *min_element(res.begin(),res.end());
    }
};