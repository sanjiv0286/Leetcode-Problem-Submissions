class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        priority_queue<long long, vector<long long>, greater<long long>> pq;
        int ans = 0;
        for(auto &x:nums){
            pq.push(x);
        }
        while (pq.top()<k && pq.size()>=2) {
            long long  x = pq.top(); pq.pop();
            long long y = pq.top(); pq.pop();
            long long  ne = 2*min(x,y)+max(x,y);
            // pq.push(min(1LL*k,ne));
            pq.push(ne);
            ans++;
        }
       
        return ans;
    }
};