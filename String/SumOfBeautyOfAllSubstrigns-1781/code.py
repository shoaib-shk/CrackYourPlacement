class Solution:
    def beautySum(self, s: str) -> int:
        ans = 0
        for i in range(len(s)):
            freq = {}
            for j in range(i,len(s)):
                freq[s[j]] = freq.get(s[j],0) + 1
                val = freq.values()
                min_val = min(val)
                max_val = max(val)
                ans += max_val - min_val
        return ans
