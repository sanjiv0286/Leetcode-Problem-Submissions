

class Solution {
public:
    void f(string prev, int& n, vector<string>& res, string& curr) {
        if (curr.size() == n) {
            res.push_back(curr);
            return;
        }
        if (prev == "NA" || prev == "1") {
            curr.push_back('0');
            f("0", n, res, curr);
            curr.pop_back();
        }
        curr.push_back('1');
        f("1", n, res, curr);
        curr.pop_back();
    }

    vector<string> validStrings(int n) {
        vector<string> res;
        string curr = "";
        f("NA", n, res, curr);
        return res;
    }
};