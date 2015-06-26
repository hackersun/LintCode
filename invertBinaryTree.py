"""
Definition of TreeNode:
class TreeNode:
    def __init__(self, val):
        this.val = val
        this.left, this.right = None, None
"""
class Solution:
    # @param root: a TreeNode, the root of the binary tree
    # @return: nothing
    def invertBinaryTree(self, root):
        # write your code here
        if root is None:
            return
        tmp = root.left
        root.left = root.right
        root.right = tmp
        self.invertBinaryTree(root.left)
        self.invertBinaryTree(root.right)
