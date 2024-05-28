class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& v, vector<int>& q, int x) {
        unordered_map<int, int> m;
        vector<int>res;
        int n = v.size();
        int c=1;
        for (int i = 0; i < n; i++) {
            if (v[i] == x) {
                m[c]=i;
                c++;
            }
        }
        for(int i=0;i<q.size();i++){
            int occ= q[i];
            if(occ>=c){
                res.push_back(-1);
            }
            else{
                res.push_back(m[occ]);
            }
        }
        return res;
    }
};