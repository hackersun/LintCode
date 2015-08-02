/**
 * Definition of ListNode
 * class ListNode {
 * public:
 *     int val;
 *     ListNode *next;
 *     ListNode(int val) {
 *         this->val = val;
 *         this->next = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param head: The first node of linked list.
     * @return: The node where the cycle begins. 
     *           if there is no cycle, return null
     */
    ListNode *detectCycle(ListNode *head) {
        // write your code here
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        if(head->next == head){
            return head;
        }
        ListNode* fast = head;
        ListNode* slow = NULL;
        while(fast != slow){
            if(fast->next != NULL){
                fast = fast->next;
                if(slow != NULL){
                    slow = slow->next;
                }else{
                    slow = head->next;
                }
            }else{
                return NULL;
            }
            if(fast->next != NULL){
                fast = fast->next;
            }else{
                return NULL;
            }
        }
        fast = head;
        while(fast!=slow){
            fast = fast->next;
            slow = slow->next;
        }
        return fast;
    }
};



