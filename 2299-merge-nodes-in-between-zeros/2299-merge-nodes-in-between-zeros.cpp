


//Approach-2 (Using Recursive approach)
//T.C : O(n)
//S.C : O(1)
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        head = head->next;
        if(head == NULL) {
            return head;
        }

        ListNode* temp = head;
        int sum = 0;
        while(temp != NULL && temp->val != 0) {
            sum += temp->val;
            temp = temp->next;
        }

        head->val = sum;
        head->next = mergeNodes(temp); //Recursion leap of faith
        return head;
    }
};
