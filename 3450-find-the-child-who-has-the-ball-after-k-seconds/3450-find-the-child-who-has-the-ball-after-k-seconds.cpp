class Solution {
public:
    int numberOfChild(int n, int k) {

        int pos =0;
        int dir =1;

        for(int i=0;i<k;i++){
            pos += dir ;

            if(pos ==0|| pos ==n-1){
                dir = -dir;
            }
        }
        return pos;
        
    }
};