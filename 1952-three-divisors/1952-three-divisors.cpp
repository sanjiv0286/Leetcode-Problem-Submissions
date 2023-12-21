class Solution {
public:
   bool isPrime(int num ){
        for(int i=2;i<=num/2;i++){
            if(num%i==0){
                return false;
            }
            
        }
        return true;
        
      }
    bool isThree(int n) {
        if(n==1||n==2||n==3){
            return false;
         }
        int root = sqrt(n);
        return ((root*root==n)&& isPrime(root));
        
    }
};