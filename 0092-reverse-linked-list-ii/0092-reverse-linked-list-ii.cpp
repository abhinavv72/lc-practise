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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(!head)
           return nullptr;
        ListNode* dummy = new ListNode(0,head);
        head = dummy;
        ListNode * curr = head->next;
        ListNode * prev = dummy;
        for(int i=1; i<left; i++){
            prev = prev->next;
            
        }
        ListNode * left_prev= prev->next;
        for(int i=0; i<right-left; i++){
            ListNode * temp = prev->next;
            prev->next = left_prev->next;
            left_prev->next= left_prev->next->next;
            prev->next->next= temp;
        }
        return dummy->next;
    }
};