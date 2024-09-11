class Solution {
public:
   int minBitFlips(int start, int goal) {
    // XOR the two numbers to find differing bits
    int xorResult = start ^ goal;
    
    // Count the number of 1's in the XOR result (i.e., number of differing bits)
    int count = 0;
    while (xorResult > 0) {
        count += xorResult & 1; // Increment count if the least significant bit is 1
        xorResult >>= 1;        // Right shift to check the next bit
    }
    
    return count;
}

};