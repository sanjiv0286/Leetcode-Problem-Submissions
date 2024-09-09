/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        // Initialize the matrix with -1
        vector<vector<int>> matrix(m, vector<int>(n, -1));

        int top = 0, bottom = m - 1, left = 0, right = n - 1;

        // Current node pointer
        ListNode* current = head;

        while (current != nullptr && top <= bottom && left <= right) {
            // Fill the top row from left to right
            for (int i = left; i <= right && current != nullptr; ++i) {
                matrix[top][i] = current->val;
                current = current->next;
            }
            top++; // Move the top boundary down

            // Fill the right column from top to bottom
            for (int i = top; i <= bottom && current != nullptr; ++i) {
                matrix[i][right] = current->val;
                current = current->next;
            }
            right--; // Move the right boundary left

            // Fill the bottom row from right to left
            for (int i = right; i >= left && current != nullptr; --i) {
                matrix[bottom][i] = current->val;
                current = current->next;
            }
            bottom--; // Move the bottom boundary up

            // Fill the left column from bottom to top
            for (int i = bottom; i >= top && current != nullptr; --i) {
                matrix[i][left] = current->val;
                current = current->next;
            }
            left++; // Move the left boundary right
        }

        return matrix;
    }
};