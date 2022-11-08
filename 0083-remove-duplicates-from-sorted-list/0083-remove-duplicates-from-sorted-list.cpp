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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr=head;
        ListNode* nxt;
        if(!curr)
            return head;
        while(curr->next)
            if(curr->val==curr->next->val){
                nxt=curr->next->next;
                delete curr->next;
                curr->next=nxt;
            }
        else
            curr=curr->next;
        return head;
    }
};