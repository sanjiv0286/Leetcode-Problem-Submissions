class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& positions,
                                      vector<int>& healths, string directions) {

        int n = positions.size();
        vector<tuple<int, int, char>> robots;

        // Combine the positions, healths, and directions into a list of tuples
        for (int i = 0; i < n; ++i) {
            robots.emplace_back(positions[i], healths[i], directions[i]);
        }

        // Sort the robots by their positions
        sort(robots.begin(), robots.end());

        stack<pair<int, int>> stack;
        vector<pair<int, int>> survivors;

        for (const auto& robot : robots) {
            int pos = get<0>(robot);
            int health = get<1>(robot);
            char direction = get<2>(robot);

            if (direction == 'R') {
                stack.push({pos, health});
            } else {
                while (!stack.empty() && health > 0) {
                    auto [last_pos, last_health] = stack.top();

                    if (last_health > health) {
                        stack.top().second -= 1;
                        health = 0;
                    } else if (last_health < health) {
                        stack.pop();
                        health -= 1;
                    } else {
                        stack.pop();
                        health = 0;
                    }
                }

                if (health > 0) {
                    survivors.push_back({pos, health});
                }
            }
        }

        // Add remaining robots in stack to survivors
        while (!stack.empty()) {
            survivors.push_back(stack.top());
            stack.pop();
        }

        // Create a map of positions to final healths
        unordered_map<int, int> final_health_map;
        for (const auto& survivor : survivors) {
            final_health_map[survivor.first] = survivor.second;
        }

        // Extract the healths in the original input order
        vector<int> final_healths;
        for (int i = 0; i < n; ++i) {
            if (final_health_map.find(positions[i]) != final_health_map.end()) {
                final_healths.push_back(final_health_map[positions[i]]);
            }
        }

        return final_healths;
    }
};