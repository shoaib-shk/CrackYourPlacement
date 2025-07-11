class Solution:
    def longestPalindrome(self, s: str) -> str:
        def findIndex(l,r):
            while l >= 0 and r < len(s) and s[l] == s[r]:
                l -= 1
                r += 1
            return s[l+1:r]
        ans = ""
        for i in range(len(s)):
            p1 = findIndex(i,i)
            p2 = findIndex(i,i+1)

            if len(p1) >len(ans):
                ans = p1
            if len(p2)>len(ans):
                ans = p2
        return ans