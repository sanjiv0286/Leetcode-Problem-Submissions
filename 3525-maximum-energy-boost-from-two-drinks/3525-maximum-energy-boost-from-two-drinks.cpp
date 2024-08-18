
class Solution {
public:
    long long maxEnergyBoost(vector<int>& energyDrinkA, vector<int>& energyDrinkB) {
        int n = energyDrinkA.size();
        vector<long long> dpA(n, 0), dpB(n, 0);

        dpA[0] = energyDrinkA[0];
        dpB[0] = energyDrinkB[0];

        for (int i = 1; i < n; ++i) {
            dpA[i] = max(dpA[i - 1] + energyDrinkA[i], dpB[i - 1]);
            dpB[i] = max(dpB[i - 1] + energyDrinkB[i], dpA[i - 1]);
        }

        return max(dpA[n - 1], dpB[n - 1]);
    }
};