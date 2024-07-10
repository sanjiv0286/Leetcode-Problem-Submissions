class Solution {
public:
    int minOperations(vector<string>& logs) {

        // operations :-->

        // ../ , ./ , x/

        int n = logs.size();
        int ct = 0;
        // if(logs[0]=="./" || logs[0]=="../") {
        //     ct++;
        // }
        // else if (n==1){
        //     ct++;
        // }
        for (int i = 0; i < n; i++) {
            if (logs[i] == "../" ) {
                if(ct!=0)
                ct += -1;
            } 
            else if (logs[i] == "./"){
                ct+= 0;
            }
            else {
                ct++;
            }
        }
        // return (ct == -1) ? 0 : ct;
        return ct;
    }
};