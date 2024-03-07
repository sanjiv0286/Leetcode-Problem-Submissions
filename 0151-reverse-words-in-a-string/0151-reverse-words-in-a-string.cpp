class Solution {
public:
 
    string reverseWords(string s) {
    stack<string> words;
    string word = "";
    
    // Iterate through the string
    for (char c : s) {
        if (c == ' ') {
            if (!word.empty()) {
                words.push(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    
    // Add the last word to the stack if it's not empty
    if (!word.empty()) {
        words.push(word);
    }
    
    // Construct the reversed string
    string result = "";
    while (!words.empty()) {
        result += words.top();
        words.pop();
        if (!words.empty()) {
            result += " ";
        }
    }
    
    return result;
}

};