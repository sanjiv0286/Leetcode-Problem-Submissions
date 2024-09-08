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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // Step 1: Count the total number of nodes in the linked list
        int totalNodes = 0;
        ListNode* current = head;
        while (current != nullptr) {
            totalNodes++;
            current = current->next;
        }

        // Step 2: Determine the size of each part
        int partSize = totalNodes / k; // Minimum size of each part
        int extraNodes =
            totalNodes %
            k; // Extra nodes that will be distributed across the first parts

        vector<ListNode*> result(k, nullptr);
        current = head;

        for (int i = 0; i < k && current != nullptr; i++) {
            result[i] = current; // The head of the current part
            int currentPartSize =
                partSize +
                (extraNodes > 0
                     ? 1
                     : 0); // Add an extra node to the first 'extraNodes' parts
            extraNodes--;

            // Step 3: Move to the end of the current part
            for (int j = 1; j < currentPartSize; j++) {
                current = current->next;
            }

            // Step 4: Break the link to the next part
            ListNode* nextPartHead = current->next;
            current->next = nullptr; // End the current part
            current = nextPartHead;  // Move to the next part
        }

        return result;
    }
};