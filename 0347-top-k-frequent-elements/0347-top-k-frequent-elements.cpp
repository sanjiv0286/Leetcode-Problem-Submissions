
// time complexity 
// brute force : O(nlogn)
// here : O(nlogk)
// space : O(n+k)
class Solution {
public:
    typedef pair<int, int> p;
    // template <typename T>
    // using min_heap = priority_queue<T, vector<T>, greater<T>>;
    // Now you can declare a min heap of pairs of ints by writing:
    // min_heap<pair<int, int>> q;

    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res;
        // 1. map
        unordered_map<int, int> m;
        for (auto& x : nums) {
            m[x]++;
        }

        // 2. min heap
        priority_queue<p, vector<p>, greater<p>> pq;
        // 3. push element in min heap
        // and maintain size of k only
        for(auto &x:m){
            int first = x.first;
            int second = x.second;
            // understand push first second value in pq beacause pop easily acc. to key 
            pq.push({second,first});
            if(pq.size()>k){
                pq.pop();
            }
        }
        // 4.result 
        while(!pq.empty()){
            //   res.push_back(pq.top().first);
            res.push_back(pq.top().second);//access second value
            pq.pop();
        }
        return res;

    }
};