/**
 * Definition of TreeNode:
 * class TreeNode {
 * public:
 *     int val;
 *     TreeNode *left, *right;
 *     TreeNode(int val) {
 *         this->val = val;
 *         this->left = this->right = NULL;
 *     }
 * }
 */
class Solution {
public:
    /**
     * @param root: The root of binary tree.
     * @return: An integer
     */
    int maxDepth(TreeNode *root) {
        // write your code here
        if(root == NULL) return 0;
        queue<TreeNode*> qu;
        qu.push(root);
        int count = 1;
        int dep = 0;
        while(!qu.empty()){
            TreeNode* tmp = qu.front();
            if(tmp->left != NULL) qu.push(tmp->left);
            if(tmp->right != NULL) qu.push(tmp->right);
            qu.pop();
            count--;
            if(count == 0){
                count = qu.size();
                dep++;
            }
        }
        return dep;
    }
};
