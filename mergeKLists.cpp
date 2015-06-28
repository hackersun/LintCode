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
     * @param lists: a list of ListNode
     * @return: The head of one sorted list.
     */
    ListNode *mergeKLists(vector<ListNode *> &lists) {
        // write your code here
        ListNode* head = NULL;
        ListNode* tail = NULL;
        while(true){
            int min = -1;
            for(int i = 0; i < lists.size(); i++){
                if(lists[i] == NULL) continue;
                if(min == -1){
                    min = i;
                }else if(lists[i]->val < lists[min]->val){
                    min = i;
                }
            }
            if(min == -1)return head;
            if(head == NULL){
                head = lists[min];
                tail = lists[min];
            }else{
                tail->next = lists[min];
                tail = tail->next;
            }
            lists[min] = lists[min]->next;
            tail->next = NULL;
        }
    }
};



