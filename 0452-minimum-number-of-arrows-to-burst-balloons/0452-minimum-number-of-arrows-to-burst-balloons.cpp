class Solution {
public:
    static bool com(const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    }

    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) {
            return 0;
        }
        sort(points.begin(), points.end(), com);
        // ***********Sort using a lambda comparator function
        // sort(points.begin(), points.end(),
        //      [](const vector<int>& a, const vector<int>& b) {
        //          return a[1] < b[1];
        //      });
        int arrows = 1;
        int end = points[0][1];
        for (const auto& point : points) {
            if (point[0] > end) {
                arrows++;
                end = point[1];
            }
        }
        return arrows;
    }
};
