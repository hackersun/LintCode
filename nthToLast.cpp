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
     * @param n: An integer.
     * @return: Nth to last node of a singly linked list. 
     */
    ListNode *nthToLast(ListNode *head, int n) {
        // write your code here
        if(head == NULL || n <= 0)
            return NULL;
        ListNode* p = head;
        ListNode* q = head;
        while(n-- > 0 && p != NULL){
            p = p->next;
        }
        while(p != NULL){
            p = p->next;
            q = q->next;
        }
        return q;
    }
};

