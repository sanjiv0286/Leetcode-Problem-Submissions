class Solution {
public:
    int maxArea(vector<int>& h) {
        int n = h.size();
        int l =0;
        int r =n-1;
        int maxarea =0;
        while(l<r){
            int width = (r-l);
            int height = min(h[l],h[r]);
            int curr_area = width*height;
            maxarea = max(maxarea , curr_area );
            if(h[l]<h[r]){
                l++;
            }
            else{
                r--;
            }

        }
        return maxarea ;
    }
};