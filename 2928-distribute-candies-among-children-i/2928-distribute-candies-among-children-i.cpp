class Solution {
public:
    int distributeCandies(int n, int l) {
        int ct=0;
        for(int i=0;i<=n;i++){
            for(int j=0;j<=n;j++){
                for(int k=0;k<=n;k++){
                    if(i+j+k==n && i<=l && j<=l && k<=l ){
                        ct++;
                    }
                }
            }
        }
        return ct;
        
    }
};