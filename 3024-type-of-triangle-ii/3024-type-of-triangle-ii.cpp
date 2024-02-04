class Solution {
public:
    string triangleType(std::vector<int>& v) {
        sort(v.begin(), v.end());

        
        if (v[0] + v[1] <= v[2]) {
            return "none";
        }

        
        if (v[0] == v[1] && v[1] == v[2]) {
            return "equilateral";
        }
        
      
        if (v[0] == v[1] || v[1] == v[2] || v[0] == v[2]) {
            return "isosceles";
        }

       
        return "scalene";
    }
};

