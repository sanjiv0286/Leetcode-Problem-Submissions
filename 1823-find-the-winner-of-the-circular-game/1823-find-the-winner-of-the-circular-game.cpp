class Solution {
public:

    int myjos(int n,int k){
        if(n==1){
            return 0;
        }
        return (myjos(n-1,k)+k)%n;
    }

    int findTheWinner(int n, int k) {
        return myjos(n,k)+1;
        
    }

};