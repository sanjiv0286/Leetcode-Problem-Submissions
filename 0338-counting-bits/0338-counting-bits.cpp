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
           int x =  count(i); // O(logn)
           res.push_back(x);

        }

        return res;
        
    }
};


//  time complexity is O(nlogn)
//  space O(n)


// using __builtin_popcount function time O(n)

// space complexity O(n)