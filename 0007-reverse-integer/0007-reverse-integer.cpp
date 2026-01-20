// ** using String **

// class Solution {
// public:
//     int reverse(int x) {
//         if (x == INT_MIN)
//             return 0;
//         string s = to_string(abs(x));
//         std:: reverse(s.begin(), s.end());
//         long long num = stoll(s);
//         if (num > INT_MAX || num < INT_MIN) {
//             return 0;
//         }
//         return (x > 0) ? (int)num : -(int)num;
//     }
// };

// ** Using modulo and division **
// C++ me % (mod) aur / (division) negative numbers ke saath automatically kaam
// karte hain, Isliye hume alag se sign handle karne ki zarurat hi nahi padti.
// “Runtime errors occur when the program performs illegal operations during
// runtime, such as integer overflow or memory access violations.”

class Solution {
public:
    int reverse(int x) {
        int revnum = 0;
        int d = 0;
        // ✅ while (x != 0) → CORRECT
        // Ye loop :
        // Positive numbers ke liye chalega
        // Negative numbers ke liye bhi chalega
        // Last digit 0 hone par bhi sahi kaam karega
        while (x != 0) { // ****
            d = x % 10;
            if (revnum > INT_MAX / 10 || revnum < INT_MIN / 10) {
                return 0;
            }
            revnum = revnum * 10 + d;
            x /= 10;
        }
        return revnum;
    }
};