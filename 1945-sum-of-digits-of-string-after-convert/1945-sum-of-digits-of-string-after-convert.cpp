class Solution {
public:
    int getLucky(string s, int k) {
        string tem;
        for(auto &x:s){
            tem += to_string(x-'a'+1);
        }
        int n=0;
        for(auto &x : tem){
            n += x-'0';
            
        }
        int next ;
        for(int i=1;i<k;i++){
            next=0;
            while(n){
            next  +=  n%10;
            n /= 10;
            }
            n=next;
        }
        return n;
        
    }
};