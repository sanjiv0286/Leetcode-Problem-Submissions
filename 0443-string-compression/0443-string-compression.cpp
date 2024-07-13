class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int index =0;
        int i=0;

        while(i<n){
            char curr_char = chars[i];
            int count =0;
            while(i<n&& chars[i]==curr_char){
                count++;
                i++;
            }

            chars[index]=curr_char;
            index++;
            if(count>1){
                string str = to_string(count);

                for(auto &x:str){
                    chars[index] = x;
                    index++;
                }
            }


        }
        return index;
    }
};