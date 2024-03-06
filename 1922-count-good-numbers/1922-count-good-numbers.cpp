class Solution {
public:
    const long long   m = 1e9+7;

    long long power(long long x , long long y){
        if(y==0){
            return 1;
        }
       long long temp = power(x,y/2);
       temp = (temp*temp);

       if(y%2==0){
           return temp%m ;
       }
       else{
           return (temp*x)%m;
       }

    }

    int countGoodNumbers(long long n) {

        long long  pow1=n/2+n%2;
        long long  pow2 = n/2;
        long long  ans1 = power(5,pow1);
        long long  ans2 = power(4,pow2);
        return (ans1*ans2)%m;
    }
};