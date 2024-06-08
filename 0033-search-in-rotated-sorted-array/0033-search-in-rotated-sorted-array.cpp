class Solution {
public:
    int search(vector<int>& nums, int t) {
        int n = nums.size();
        int l = 0,h=n-1;
        while(l<=h){
            int mid = (l+h)/2;
            if(nums[mid]==t)
            return mid;
            // *left half of array is sorted or not  
            if(nums[mid]>=nums[l]){
                //* consider this half is sorted or not 
                if(t>=nums[l]&&t<=nums[mid]){
                    //* left half is sorted
                    h = mid-1;
                }
                else{
                    // *right half is sorted
                    l = mid+1;
                }
            }
             // *right half of array is sorted or not  
            else{
                 //* consider this half is sorted or not 
                 if(t>nums[mid]&&t<=nums[n-1]){
                    //*right half is sorted
                    l = mid+1;
                 }
                 else{
                    // * left half is sorted 
                    h= mid-1;
                 }
            }
        }
        return -1;
    }
};