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
    int getLength(ListNode* head){
    int len =0;
    ListNode* temp = head;
        while(temp!= NULL){
          len++;
            temp= temp->next;
        }
        return len;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        int n = getLength(head);
        //update k
        //edge case
        if(head== NULL || head->next==NULL ||k==0 ||k%n==0)
            return head;
        k=k%n;
        ListNode* prev = NULL;
        ListNode* curr = head;
        int t = n-k;
        while(t--){
            prev = curr;
            curr = curr->next;
        }
        //step 2
        prev->next = NULL;
        //step 3
        
        ListNode* tail = curr;
        while(tail->next!=NULL){
            tail = tail->next;
        
        }
        tail->next = head;
        //step 4 : return ans;
        return curr;
    }
};