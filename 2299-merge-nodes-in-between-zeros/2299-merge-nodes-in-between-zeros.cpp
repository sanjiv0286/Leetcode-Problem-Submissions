
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {

        ListNode* p1 = head->next;
        ListNode* p2 = p1;
        // int p2 = head->next;
        while (p2 != nullptr) {
            int sum = 0;
            while (p2 != nullptr && p2->val != 0) {
                sum += p2->val;
                p2 = p2->next;
            }
            p1->val = sum;
            // p2 = p2->next;
            // if (p2 != nullptr) {
                p2 = p2->next;
            // }
            p1->next = p2;
            p1 = p2;
        }
        return head->next;
    }
};