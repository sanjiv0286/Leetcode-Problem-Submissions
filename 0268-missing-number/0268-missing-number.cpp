class Solution {
public:
    int missingNumber(vector<int>& arr) {
    //      sort(arr.begin(),arr.end());
    //    int j = 0;
    //    for(auto x: arr){
    //        if(x != j) return j;
    //        j++;
          
    //    }
    //    return j;
    // ***********************************
    int n=arr.size();
    int res =0;
    for(int i=0;i<n;i++){
        res = res^arr[i];

    }
    for(int i=0;i<=n;i++){
        res = res ^ i;
    }
    return res;
        
    }
};