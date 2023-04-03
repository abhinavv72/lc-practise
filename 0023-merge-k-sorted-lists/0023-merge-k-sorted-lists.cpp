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
//approach STEP 1: Create a new dummy node (ans). It will have the value of -1 and will point to NULL i.e.,

/*C++ -> ListNode *ans = new ListNode(-1);

Java -> ListNode ans = new ListNode(-1);

STEP 2: Now, create a new node (tail). It will be a copy (deep copy) of ans node. The purpose of a tail node is to keep the track of the last node of the sorted merged Linked List.

STEP 3: Further, we will create a priority queue (Min Heap) of linked list nodes (Min Heap which will contain nodes), where we will insert the first node of every Linked list present, in turn creating a priority queue of size k, k denotes the number of linked lists present.

STEP 4: Now, we will remove the top node of the priority queue, store it in some temporary node(temp), and delete the top node of the priority queue.

STEP 5: Attach the temp node to the next tail node.

STEP 6: Further, make the tail pointer point to the temp node, indicating that temp is the last node of the sorted merged linked list formed so far.

STEP 7: If the next node of temp is not NULL, then we will insert the next node of temp.

STEP 8: Repeat step 5,6,7,8 till the priority queue is not empty.

STEP 9: Finally, return the head of sorted linked list i.e. next of ans node since its next pointer points to the first node of merged sorted Linked List.*/

class cmp
{
    public :
    bool operator() (ListNode *a, ListNode *b){
        return a->val>b->val;
    }
};
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
      priority_queue<ListNode*, vector<ListNode*>,cmp>q;
        ListNode* dummy = new ListNode(-1);
        ListNode* tail = dummy;
        for(int i=0; i<lists.size(); i++){
            if(lists[i]!=NULL){
                q.push(lists[i]);
            }
        }
            while(q.size()){
                ListNode* temp = q.top();
                tail->next=temp; 
                tail = temp;
                q.pop();
                if(temp->next!=NULL)
                    q.push(temp->next);
            }
        return dummy->next;
    }
};