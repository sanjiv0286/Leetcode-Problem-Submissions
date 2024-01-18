class Solution {
public:
    bool isThree(int n) {
        int ct=0;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ct++;
            }
        }
        return (ct==3);
        
    }
};