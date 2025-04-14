class Solution {
public:
    int minNumberOfHours(int initialEnergy, int initialExperience,
                         vector<int>& energy, vector<int>& experience) {
        int n = energy.size();
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += energy[i];
        }
        int val = 0;
        if (initialEnergy <= sum)
            val = sum - initialEnergy + 1;
        for (int i = 0; i < n; i++) {
            if (initialExperience > experience[i]) {
                initialExperience += experience[i];
                // continue;
            } else {
                val += experience[i] - initialExperience + 1;
                initialExperience +=
                    experience[i] - initialExperience + 1 + experience[i];
            }
        }
        return val;
    }
};