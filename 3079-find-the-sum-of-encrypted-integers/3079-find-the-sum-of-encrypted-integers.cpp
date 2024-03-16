class Solution {
public:
    
    int encrypted(int x){
        string s = to_string(x);
        char maxi = *max_element(s.begin(),s.end());
        string t(s.size(),maxi);
        return stoi(t);
    }
    
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum =0;
        for(auto &x:nums){
           
                sum += encrypted(x);
           
        }
        return sum;
        
    }
};