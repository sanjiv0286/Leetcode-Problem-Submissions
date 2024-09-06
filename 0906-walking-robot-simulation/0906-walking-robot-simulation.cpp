

class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        vector<pair<int, int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        int dir = 0;
        unordered_set<string> obstacleSet;
        for (const auto& obstacle : obstacles) {
            obstacleSet.insert(to_string(obstacle[0]) + "," + to_string(obstacle[1]));
        }
        
        int x = 0, y = 0;
        int maxDistanceSquared = 0;
        
        for (int command : commands) {
            if (command == -2) { 
                dir = (dir + 3) % 4;
            } else if (command == -1) { 
                dir = (dir + 1) % 4;
            } else {  
                for (int i = 0; i < command; ++i) {
                    int newX = x + directions[dir].first;
                    int newY = y + directions[dir].second;
                    if (obstacleSet.find(to_string(newX) + "," + to_string(newY)) != obstacleSet.end()) {
                        break;  
                    }
                    x = newX;
                    y = newY;
                    maxDistanceSquared = max(maxDistanceSquared, x * x + y * y);
                }
            }
        }
        
        return maxDistanceSquared;
    }
};
