class Solution:
    def frequencySort(self, s: str) -> str:
        count = {}
        for i in s:
            if i not in count:
                count[i] = 1
            else:
                count[i] +=1
        sorted_chars = sorted(count.items(), key=lambda x: x[1], reverse=True)
        ans=""
        for i,j in sorted_chars:
            ans += i*j
        return ans
