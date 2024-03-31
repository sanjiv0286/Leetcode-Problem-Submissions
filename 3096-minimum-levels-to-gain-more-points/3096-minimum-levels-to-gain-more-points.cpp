class Solution {
public:
    int minimumLevels(vector<int>& p) {

        int n =  p.size();
        int tot =0;
        for(int i=0;i<n;i++){
            if(p[i]==1) tot++;
            else{
                tot--;
            }
        }
        int dipesh=0;
         for(int i=0;i<n-1;i++){
            if(p[i]==1) dipesh++;
            else{
                dipesh--;
            }
            if(dipesh > (tot-dipesh)){
                return i+1;
            }
        }
        return -1;

        
    }
};