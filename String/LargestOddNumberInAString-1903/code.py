class Solution:
    def largestOddNumber(self, num: str) -> str:
        for i in range(len(num)-1,-1,-1):
            n = int(num[i])
            if n%2 != 0:
                return num[0:i+1]
        return ""