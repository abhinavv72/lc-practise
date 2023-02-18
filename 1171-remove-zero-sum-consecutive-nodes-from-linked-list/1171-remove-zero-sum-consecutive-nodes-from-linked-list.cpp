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
    ListNode* solve(ListNode* head, bool& anychange){
        if(head == NULL)
            return head;
        ListNode* temp = head;
        int sum = 0;
        while(temp!=NULL){
            sum=sum+temp->val;
            if(sum==0)
                break;
            temp=temp->next;
        }
        if(sum==0){
            anychange= true;
            return temp->next;
            
        }
        head->next = solve(head->next,anychange);
        return head;
        }
    
    ListNode* removeZeroSumSublists(ListNode* head) {
        while(true){
            bool anychange = false;
            head = solve(head,anychange);
            if(head==NULL || anychange == false)
                break;
        }
        return head;
    }
};