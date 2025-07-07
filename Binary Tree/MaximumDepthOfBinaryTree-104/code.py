# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if not root:
            return 0
        counter = 0
        q = [root]
        while q:
            for _ in range(len(q)):
                node = q.pop(0)
                if node.right:
                    q.append(node.right)
                if node.left:
                    q.append(node.left)
            counter += 1
        return counter