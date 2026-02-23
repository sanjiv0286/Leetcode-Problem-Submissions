class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string>st;
        int n = s.size();
        int total_binary_code = 1<<k; 
        for(int i=k;i<=n;i++){
            string sub = s.substr(i-k,k);
            if(st.count(sub)!=true){
                st.insert(sub);
                total_binary_code--;
            }

            if(total_binary_code == 0){
                return true;
            }

        }
        return false;
    }
};