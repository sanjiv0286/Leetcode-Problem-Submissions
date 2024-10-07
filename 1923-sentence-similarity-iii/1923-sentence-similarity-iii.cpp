class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
        if (s1.size() < s2.size()) {
            swap(s1, s2);
        }

        // vector<string>v1,v2;
        deque<string> dq1, dq2;

        stringstream ss1(s1);

        string token;

        while (ss1 >> token) {
            // v1.push_back(token);
            dq1.push_back(token);
        }

        stringstream ss2(s2);
        // string token ;

        while (ss2 >> token) {
            // v2.push_back(token);
            dq2.push_back(token);
        }

        int i = 0, j = dq1.size() - 1;
        int k = 0, l = dq2.size() - 1;

        while (!dq1.empty() && !dq2.empty() && dq1.front() == dq2.front()) {
            dq1.pop_front();
            dq2.pop_front();
        }

        // while(i<v1.size()&& k<v2.size() && v1[i]==v2[k]){
        //     i++;
        //     k++;
        // }

        // while(l>=k && v1[j]==v2[l]){
        //     // j--;
        //     // l--;
        //     dq1.pop_back();
        //     dq2.pop_back();
        // }

        while (!dq1.empty() && !dq2.empty() && dq1.back() == dq2.back()) {
            dq1.pop_back();
            dq2.pop_back();
        }
        return dq2.empty();
    }
};