// class Solution {
// public:
//     string lastNonEmptyString(string s) {
        
//         map<int,int>m;
//         for(auto &x:s){
//             m[x]++;
//         }
//         int mini=INT_MAX;
//         for(auto &x:m){
//             mini = min(mini,x.second);
//         }
//         string t="";
//         if(mini ==1){
//             return s;
//         }
//         for(auto &x:s){
//             // while(m[x]!=mini){
//             //     t+=x;
//             //     m[x]--;
//             // }
//             if(m[x]>mini){
//                 t+=x;
//                 m[x]--;
//             }

//         }
//         return t;
        
//     }
// };


class Solution {
public:
  string lastNonEmptyString(string s) {
    map<char, int> mp, mp2;
    
    for (auto ch : s)
        mp[ch]++;
    
    int mx = 0;
    for (auto [x, y] : mp) {
        if (y > mx)
            mx = y;
    }
    // cout << mx << endl;
    
    string ans = "";
    int n = s.size();
    for (auto x : mp) {
        if (x.second == mx)
            ans += x.first;
    }
    int cnt = ans.size();
    string res = "";
    for (auto x : ans)
        mp2[x]++;
    
    for (int i = n - 1; i >= 0; i--) {
        if (ans.find(s[i]) != string::npos && cnt > 0 && mp2[s[i]] > 0) {
            res += s[i];
            cnt--;
            mp2[s[i]]--;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}

};
