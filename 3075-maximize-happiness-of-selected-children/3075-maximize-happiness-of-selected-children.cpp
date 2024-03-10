class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int> pq;
        for (int h : happiness) {
            pq.push(h);
        }
        long long total_happiness = 0;
        // for (int i = 0; i < k; ++i)
        int i=0;
        while(pq.top()>0&&i<k){
            int max_val = pq.top()-i; 
            pq.pop();
            if(max_val>0)
            total_happiness += max_val;
            i++; 
            // if (max_val > 1) {
            //     pq.push(max_val - 1);
            // }
            // else {
            //     break;
            // }
        }

        return total_happiness;
    }
};

