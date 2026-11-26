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
    int numComponents(ListNode* head, vector<int>& nums) {
        int count =0;
        unordered_set<int> s(nums.begin(), nums.end());
        bool isComponent = false;

        while(head!=NULL ){
            if((s.contains(head->val))){       
                if(!isComponent){ 
                isComponent = true;
                count ++;
                }
            }else{
                isComponent = false;
            }

            head = head->next;
          
        }
        return count;
    }
};