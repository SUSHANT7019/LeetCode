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
    bool isPalindrome(ListNode* head) {
        string s ="";
        while(head != NULL){
            s.push_back(head->val);
            head=head->next;
        }
        string rev = s;
        reverse(rev.begin(),rev.end());
        if(s==rev){
            return true;
        }else{
            return false;
        }
    }
};