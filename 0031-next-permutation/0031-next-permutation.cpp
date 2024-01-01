class Solution {
public:
    void nextPermutation(vector<int>& a) {
        int n=a.size();
        int gola_index=-1;
        for(int i=n-1;i>0;i--){
            if(a[i]>a[i-1]){
                gola_index=i-1;
                break;
            }
        }
       if(gola_index!=-1) {
            int swap_index=-1;
        for(int j=n-1;j>gola_index;j--){
            if(a[j]>a[gola_index]){
                swap_index=j;
                break;
            }
        }
        swap(a[gola_index],a[swap_index]);
        }
        reverse(a.begin()+gola_index+1,a.end());

        
    }
};