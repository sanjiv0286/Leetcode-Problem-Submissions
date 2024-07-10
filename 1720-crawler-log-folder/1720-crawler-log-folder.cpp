class Solution {
public:
    int minOperations(vector<string>& logs) {

        // // operations :-->

        // // ../ , ./ , x/

        // int n = logs.size();
        // int ct = 0;

        // for (int i = 0; i < n; i++) {
        //     if (logs[i] == "../" ) {
        //         if(ct!=0)
        //         ct += -1;
        //     }
        //     else if (logs[i] == "./"){
        //         ct+= 0;
        //     }
        //     else {
        //         ct++;
        //     }
        // }
        // return ct;

        // ************* Using stack ********************

        stack<string> st;
        int n = logs.size();
        for (auto& x : logs) {
            if (x == "../") {
                if (!st.empty()) {
                    st.pop();
                }
            } else if (x == "./") {
                continue;
            } else {
                st.push(x);
            }
        }

        return st.size();
    }
};