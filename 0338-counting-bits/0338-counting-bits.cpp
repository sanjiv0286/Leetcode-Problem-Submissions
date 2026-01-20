class Solution {
public:
   int count(int x){
       int ct =0;

       while(x>0){
          if(x &1 ){
              ct++;
          }
          x >>= 1;

       }

       return ct;
   }


    vector<int> countBits(int n) {

        vector<int>res;

        for(int i=0;i<=n;i++){
           int x =  count(i);
           res.push_back(x);

        }

        return res;
        
    }
};