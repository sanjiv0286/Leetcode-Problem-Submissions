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
    ListNode* deleteMiddle(ListNode* head) {
        // ListNode *slow = new ListNode();
        ListNode* slow = head;
        // ListNode *fast = new ListNode();
        ListNode* fast = head;
        ListNode* prev = nullptr;

        while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        // ********************************
        //    The issue arises when the middle node is the last node in the
        //    list. In this case, your code will result in a segmentation fault
        //    because you're accessing slow->next when slow is already pointing
        //    to the last node, which leads to a null pointer dereference.
        // so it will not work  . we need  one more pointer prev .
        // ListNode* curr = slow->next;
        // slow->val = curr->val;
        // slow->next = curr->next;
        // ******************************************
        // Delete the middle node
        if (prev != nullptr) {
            prev->next = slow->next;
            delete slow;
        } else {
            head = head->next; // Handle the case where the first node is the
                               // middle node
            delete slow;
        }

        return head;
    }
};