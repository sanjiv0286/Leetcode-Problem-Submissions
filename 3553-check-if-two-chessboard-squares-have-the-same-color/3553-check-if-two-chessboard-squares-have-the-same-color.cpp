class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int row1 = coordinate1[1] - '1';
        int col1 = coordinate1[0] - 'a';
        int row2 = coordinate2[1] - '1';
        int col2 = coordinate2[0] - 'a';

        bool color1 = (row1 + col1) % 2 == 0;
        bool color2 = (row2 + col2) % 2 == 0;
        return color1 == color2;
    }
};
