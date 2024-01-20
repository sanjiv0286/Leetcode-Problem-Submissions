class Solution {
public:
    bool canPlaceFlowers(vector<int>& fb, int n) {
        int ct = 0;
        if (n == 0) {
            return true;
        }
       
        for (int i = 0; i < fb.size(); i++) {
            if (fb[i] == 0 && (i == 0 || fb[i-1] == 0) && (i == fb.size()-1 || fb[i+1] == 0))
          
            {
                ct++;
                // n--;
                fb[i] = 1;
            }
            // if (n == 0) {
            //     return true;
            // }
        }
        return (ct >= n);
        // return (n <= 0);
    }
};