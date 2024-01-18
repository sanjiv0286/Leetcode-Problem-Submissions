class Solution {
public:
    int getLucky(string s, int k) {
        int n =s.size();
        string temp = "";
        for(int i=0;i<n;i++){
            temp = temp + to_string(s[i]-'a'+1);
        }
         int val =0;
        for(auto & x: temp){
             val += x-'0';
        }
        int ds;
        for(int i=1;i<k;i++){
            ds =0;
            while(val!=0){
                
                ds = ds +val%10;
                val /=10;
            }
            val = ds;
        }

        return val ;
        
    }
};