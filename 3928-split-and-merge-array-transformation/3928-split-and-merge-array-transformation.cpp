#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    // Helper: generate all possible next states from one split-and-merge operation
    vector<vector<int>> generateNext(const vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> res;

        for (int L = 0; L < n; L++) {
            for (int R = L; R < n; R++) {
                vector<int> sub(arr.begin() + L, arr.begin() + R + 1);

                vector<int> remaining;
                remaining.insert(remaining.end(), arr.begin(), arr.begin() + L);
                remaining.insert(remaining.end(), arr.begin() + R + 1, arr.end());

                for (int pos = 0; pos <= (int)remaining.size(); pos++) {
                    vector<int> newArr = remaining;
                    newArr.insert(newArr.begin() + pos, sub.begin(), sub.end());
                    res.push_back(newArr);
                }
            }
        }

        return res;
    }

    int minSplitMerge(vector<int>& nums1, vector<int>& nums2) {
        if (nums1 == nums2) return 0;

        queue<pair<vector<int>, int>> q;
        set<vector<int>> visited;

        q.push({nums1, 0});
        visited.insert(nums1);

        while (!q.empty()) {
            auto [cur, steps] = q.front();
            q.pop();

            if (cur == nums2) return steps;

            for (auto &nextState : generateNext(cur)) {
                if (!visited.count(nextState)) {
                    visited.insert(nextState);
                    q.push({nextState, steps + 1});
                }
            }
        }

        return -1; // should never happen for valid permutations
    }
};
