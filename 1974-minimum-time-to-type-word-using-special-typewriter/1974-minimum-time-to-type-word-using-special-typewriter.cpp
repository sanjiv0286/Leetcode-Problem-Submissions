class Solution {
public:
   int distance(char c1,char c2){
       return min(abs(c1-c2),26-abs(c1-c2));
   } 

    int minTimeToType(string word) {
        char c ='a';
        int tt=0;
        int n = word.size();
        for(int i=0;i<n;i++){
            int type_time= distance(word[i],c)+1;
            tt += type_time;
            c = word[i];
        }
        return tt;
        
    }
};