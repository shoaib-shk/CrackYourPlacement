# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def preorder_traversal(self, node, result):
        if node is None:
            return
        result.append(node.val)
        self.preorder_traversal(node.left, result)
        self.preorder_traversal(node.right, result)

    def preorderTraversal(self, root: Optional[TreeNode]) -> List[int]:
        result = []
        self.preorder_traversal(root, result)
        return result