class Solution {
public:
    map<string, int> parseFormula(string formula) {
        stack<map<string, int>> st;
        map<string, int> current;
        int n = formula.length();
        for (int i = 0; i < n;) {
            if (isalpha(formula[i]) && isupper(formula[i])) {
                int j = i + 1;
                while (j < n && isalpha(formula[j]) && islower(formula[j])) {
                    j++;
                }
                string element = formula.substr(i, j - i);
                i = j;
                int count = 0;
                while (j < n && isdigit(formula[j])) {
                    count = count * 10 + formula[j] - '0';
                    j++;
                }
                if (count == 0)
                    count = 1;
                current[element] += count;
                i = j;
            } else if (formula[i] == '(') {
                st.push(current);
                current.clear();
                i++;
            } else if (formula[i] == ')') {
                int j = i + 1;
                int count = 0;
                while (j < n && isdigit(formula[j])) {
                    count = count * 10 + formula[j] - '0';
                    j++;
                }
                if (count == 0)
                    count = 1;
                for (auto& p : current) {
                    p.second *= count;
                }
                if (!st.empty()) {
                    map<string, int> top = st.top();
                    st.pop();
                    for (auto& p : current) {
                        top[p.first] += p.second;
                    }
                    current = top;
                }
                i = j;
            } else {
                i++;
            }
        }
        return current;
    }

    string countOfAtoms(string formula) {
        map<string, int> counts = parseFormula(formula);
        vector<pair<string, int>> elements(counts.begin(), counts.end());
        sort(elements.begin(), elements.end());
        string result;
        for (auto& e : elements) {
            result += e.first;
            if (e.second > 1) {
                result += to_string(e.second);
            }
        }
        return result;
    }
};