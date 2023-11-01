class Solution {
public:
    int missingNumber(vector<int>& arr) {
         sort(arr.begin(),arr.end());
       int j = 0;
       for(auto x: arr){
           if(x != j) return j;
           j++;
          
       }
       return j;
        
    }
};