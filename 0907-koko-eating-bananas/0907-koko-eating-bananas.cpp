
class Solution {
public:
    bool caneat(vector<int>&v,int mid,int h){
         int actualHour = 0;
        
        for(int &x : v) {
            actualHour += x/mid;
            
            if(x%mid != 0)
                actualHour++;
            
        }
        
        return actualHour <= h;
    }


    int minEatingSpeed(vector<int>& v, int h) {


        int l = 1;
        int r = *max_element(v.begin(),v.end());

        while(l<r){
            int mid = l+(r-l)/2;
            if(caneat(v,mid,h)){
                r=mid;
            }
            else{
                l= mid+1;
            }
        }
        return l;
        
    }
};