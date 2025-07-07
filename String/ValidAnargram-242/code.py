class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        table = {}
        for i in s:
            if i in table:
                table[i] += 1
            else:
                table[i] = 1
        for j in t:
            if j not in table:
                return False
            else:
                table[j] -= 1
        for k in table.values():
            if k != 0:
                return False
        return True
        