class Solution {
public:
    ListNode* doubleIt(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;

        while(curr!=NULL){
            int newVal = curr->val * 2;

            curr->val = newVal<10 ? newVal : newVal % 10;;
            int carry = newVal>=10 ? 1 : 0;

            if(prev == NULL && carry >0){
                ListNode* newHead = new ListNode(1);
                newHead->next = head;
                prev = head;
                head = newHead;
            }
            else if(prev!=NULL){
                prev->val+=carry;
            } 
            prev = curr;
            curr = curr->next;
        }
        return head;
    }
};