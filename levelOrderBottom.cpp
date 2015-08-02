/*
 * Definition of TreeNode:
 */
class TreeNode {
public:
    int val;
    TreeNode *left, *right;
    TreeNode(int val) {
        this->val = val;
        this->left = this->right = NULL;
    }
};

 
 
class Solution {
    /**
     * @param root : The root of binary tree.
     * @return : buttom-up level order a list of lists of integer
     */
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        // write your code here
        vector<vector<int>> res;
        if(root == NULL){
            return res;
        }
        int count = 1;
        vector<TreeNode*> path;
        path.push_back(root);
        vector<int> pathnum;
        pathnum.push_back(root->val);
        res.push_back(pathnum);
        
        while(!path.empty()){
            TreeNode* tmp = *(path.begin());
            path.erase(path.begin());
            if(tmp->left){
                path.push_back(tmp->left);
            }
            if(tmp->right){
                path.push_back(tmp->right);
            }
            count--;
            if(count == 0){
                count = path.size();
                if(count > 0){
                    pathnum.clear();
                    for(int i = 0; i< count; i++){
                        pathnum.push_back(path[i]->val);
                    }
                    res.push_back(pathnum);
                }
            }
        }
        reverse(res.begin(), res.end());
        return res;
    }
};
