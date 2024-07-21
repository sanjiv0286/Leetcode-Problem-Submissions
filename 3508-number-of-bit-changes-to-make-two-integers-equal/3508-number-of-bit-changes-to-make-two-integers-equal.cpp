class Solution {
public:
    int minChanges(int n, int k) {
        
      if(n==k){
          return 0;
      }
        int andi = n&k;
      if(andi !=k){
          return -1;
      }
       int a = __builtin_popcount(n);
        int b = __builtin_popcount(andi);
        int ans = abs(a-b);
        return ans;
    }
};
