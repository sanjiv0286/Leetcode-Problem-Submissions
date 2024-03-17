
class Solution {
public:
    int minimumDeletions(string s, int k) {
        unordered_map<char, int> map;
        for(int i = 0; i < s.length(); i++) {
            
            map[s[i]]++;
        }
        
        vector<int> fq;
        for(auto& pair : map) {
            fq.push_back(pair.second);
        }
        sort(fq.begin(), fq.end(), greater<int>());
        
        int res = INT_MAX;
        
        for (int i = 0; i < fq.size(); i++) {
            int t = fq[i];
            int ct = 0;
            
            for (int f : fq) {
                if (f > t + k) {
                    ct += f - (t + k);
                } else if (f < t) {
                    ct += f;
                }
            }
            
            res = min(res, ct);
            if (res == 0) {
                break;
            }
        }
        
        return res != INT_MAX ? res : 0;
    }
};
