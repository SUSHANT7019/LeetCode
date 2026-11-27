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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * newList = new ListNode();
        ListNode * temp = head;
        ListNode * nl= newList;
        while(head!=NULL){
            if(head->val != val){
                nl->next=head;
                nl=nl->next;
            }
            head=head->next;
            nl->next = NULL;
        }
        
        return newList->next;
    }
};