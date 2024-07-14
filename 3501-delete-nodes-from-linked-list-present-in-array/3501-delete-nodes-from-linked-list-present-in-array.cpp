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
    ListNode* modifiedList(vector<int>& v, ListNode* head) {
        
        unordered_set<int> st(v.begin(), v.end());

        ListNode first;
        first.next = head;
        ListNode* prev = &first;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (st.find(curr->val) != st.end()) {
                prev->next = curr->next;
            } else {
                prev = curr;
            }
            curr = curr->next;
        }

        return first.next;
        
    }
};