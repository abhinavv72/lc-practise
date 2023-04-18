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
    ListNode* mergeNodes(ListNode* head) {
        int cur =0;
        ListNode* front = nullptr;
        ListNode* back = nullptr;
        bool first =0;
        while(head != nullptr){
            if(head->val ==0){
                if(cur>0){
                    ListNode* val = new ListNode(cur);
                    if(front== nullptr){
                        front = val;
                        back = val;
                    }else {
                        back->next= val;
                        back = val;
                    }
                    cur =0;   
                }
            }else {
                cur+= head->val;
            }
            head = head->next;
        }
        return front;
    }
};