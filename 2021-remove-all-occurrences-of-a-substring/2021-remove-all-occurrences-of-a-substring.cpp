class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.size();
        int m = part.size();
        
        while (true) {
            auto it  = s.find(part);  // Find the first occurrence of 'part'
            if (it == string::npos) {
                break;  // No more occurrences of 'part', break the loop
            }
            s.erase(it, m);  // Erase 'part' from the string
        }
        
        return s;  // Return the modified string
    }
};
