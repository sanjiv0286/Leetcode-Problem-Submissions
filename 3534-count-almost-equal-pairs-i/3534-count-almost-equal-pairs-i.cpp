#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int countPairs(vector<int>& nums) {
        int n = nums.size();
        int ct = 0;
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Convert both numbers to strings
                string str1 = to_string(nums[i]);
                string str2 = to_string(nums[j]);
                
                // Pad the shorter number with leading zeros
                if (str1.size() < str2.size()) {
                    str1 = string(str2.size() - str1.size(), '0') + str1;
                } else if (str2.size() < str1.size()) {
                    str2 = string(str1.size() - str2.size(), '0') + str2;
                }
                
                // If the numbers are the same after padding, they are almost equal
                if (str1 == str2) {
                    ct++;
                } else {
                    // Find positions where the digits differ
                    vector<int> diffPositions;
                    for (int k = 0; k < str1.size(); k++) {
                        if (str1[k] != str2[k]) {
                            diffPositions.push_back(k);
                        }
                    }
                    
                    // Check if exactly two positions differ and a swap can make them equal
                    if (diffPositions.size() == 2 &&
                        str1[diffPositions[0]] == str2[diffPositions[1]] &&
                        str1[diffPositions[1]] == str2[diffPositions[0]]) {
                        ct++;
                    }
                }
            }
        }
        
        return ct;
    }
};
