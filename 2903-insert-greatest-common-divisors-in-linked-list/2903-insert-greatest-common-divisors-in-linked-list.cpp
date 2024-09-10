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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* curr = head;

        while (curr != nullptr && curr->next != nullptr) {
            int g_c_d = __gcd(curr->val, curr->next->val);

            ListNode* new_node = new ListNode(g_c_d);

            new_node->next = curr->next;
            curr->next = new_node;

            curr = new_node->next;
        }

        return head;
    }
};
