class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int sum =0;
        int ct =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(sum <= maxWeight){
                    ct++;
                }
                sum += w;
            }
        }
        if(sum<=maxWeight){
        return ct;

        }
        else{
            return ct-1;
        }
    }
};