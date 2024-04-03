class Solution {
public:
    int maxArea(vector<int>&h) {
        // write your code here
        int n = h.size();
       int l = 0;
       int r =n-1;
       int maxArea = 0;
       while(l<r){
           int currentArea = min(h[l],h[r])*(r-l);
           maxArea = max(maxArea,currentArea);
          
               if(h[l]<h[r]){
                   l++;
               }
               else{
                   r--;
               }
          
       }
       return maxArea;
        
    }
};