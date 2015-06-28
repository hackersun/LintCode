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
     * @return: True if it has a cycle, or false
     */
    bool hasCycle(ListNode *head) {
        // write your code here
        if(head == NULL)return false;
        ListNode* fast = head->next;
        ListNode* slow = head;
        while(fast != NULL){
            if(fast == slow)
                return true;
                
            fast = fast->next;
            
            if(fast == slow)
                return true;
                
            if(fast != NULL) 
                fast = fast->next;
            else 
                return false;

            slow = slow->next;
        }
        return false;
    }
};
