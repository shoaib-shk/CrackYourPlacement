class Solution:
    def rotateString(self, s: str, goal: str) -> bool:
        if len(s) != len(goal):
            return False
        for j in range(len(goal)):
            string = s[j:]+s[:j]
            if string == goal:
                return True
        return False