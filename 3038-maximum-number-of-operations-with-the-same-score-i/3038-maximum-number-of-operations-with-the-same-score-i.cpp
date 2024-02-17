
//sanjiv kushwaha
class Solution {
public:
    int maxOperations(vector<int>& v) {
        
        int n =  v.size();
        int i=0;
        int sum = v[0]+v[1];
        int ct =0;
        while(n>=2){
            if(sum == v[i]+v[i+1]){
                ct++;
            }
            else{
                break;
            }
           v.erase(v.begin(),v.begin()+2);
            n-=2;
            
        }
        return ct;
        
    }
};