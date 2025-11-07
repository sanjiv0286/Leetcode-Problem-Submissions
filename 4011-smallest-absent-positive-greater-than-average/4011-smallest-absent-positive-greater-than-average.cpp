class Solution {
public:
    int smallestAbsent(vector<int>& nums) {

        double sum = accumulate(nums.begin(), nums.end(), 0);
        int n = nums.size();
        // set<int>st(nums.begin(),nums.end());
        double avg = (sum) / n;
        // double ans = ceil(avg);
        int ct =1;
        while(true){
            if(ct>avg && find(nums.begin(),nums.end(),ct)==nums.end()){
                return ct;
            }
            ct++;
        }

        // return 0;
    }
};