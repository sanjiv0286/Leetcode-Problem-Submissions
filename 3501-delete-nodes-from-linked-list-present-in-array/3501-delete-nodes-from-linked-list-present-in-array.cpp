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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

       unordered_set<int>st(nums.begin(),nums.end());

       ListNode first ;
       first.next = head;
       ListNode *prev = &first;
       ListNode *curr = head;

       while(curr!=NULL){
          if(st.find(curr->val)!=st.end()){
              prev->next = curr->next;
              delete curr;
          }
          else{
            prev = curr ;
          }
        //   prev->next = curr->next;
          curr = prev->next;
       }
       return first.next;
        
    }
};