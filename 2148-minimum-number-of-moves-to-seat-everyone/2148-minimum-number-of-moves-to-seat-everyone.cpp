class Solution {
public:
    int minMovesToSeat(vector<int>& se, vector<int>& st) {
      priority_queue<int>pq1,pq2;// O(1)
      int n = se.size();
      // O(nlog(n))
      for(int i=0;i<n;i++){
        pq1.push(se[i]);
        pq2.push(st[i]);
      }
      int ans =0;
      for(int i=0;i<n;i++){
          int a = pq1.top();
          int b = pq2.top();
          pq1.pop();
          pq2.pop();
          ans += abs(a-b);
      }
      return ans ;
    }
};