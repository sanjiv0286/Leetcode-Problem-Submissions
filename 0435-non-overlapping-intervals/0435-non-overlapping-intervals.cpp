class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& inter) {
        sort(inter.begin(),inter.end());
        int i = 1;
        int n = inter.size();
        vector<int> temp = inter[0];
        int count = 0;
        while (i < n) {
            int ns = inter[i][0];
            int ne = inter[i][1];
            int cs = temp[0];
            int ce = temp[1];
           
            if (ce <= ns) { // Non overlapping
                temp = inter[i];
            } else if (ce <= ne) { // overlapping

                count++;
            } else if (ce > ne) { // overlapping
                temp = inter[i];
                count++;
            }
            i++;
        }
        return count;
    }
};