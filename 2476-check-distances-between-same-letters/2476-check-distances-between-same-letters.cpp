class Solution {
public:
    bool checkDistances(string s, vector<int>& d) {
        if(s.size()==2 && d[s[0]-'a']==0){
            return true;
        }
        else if(s.size()==2 && d[s[0]-'a']!=0){
            return false;
        }
        unordered_map<char, int> firstIndex;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (firstIndex.find(ch) != firstIndex.end()) {
                int distance = i - firstIndex[ch]-1;
                // cout << "Distance between '" << ch << "' at indices "
                //      << firstIndex[ch] << " and " << i << " is " << distance
                //      << endl;

                if(distance != d[ch-'a']){
                    return false;
                }
            } else {
                firstIndex[ch] = i;
            }

        }
        return true;
    }
};